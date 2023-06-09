#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
#define SOMA '+'

using namespace std;

int string_to_int(string number_str);
int integer(char string_number);

int string_to_int(string number_str) {
	if(number_str.size() == 1)
		return integer(number_str[0]);
	
	int integer_number=0;
	
	for(int i=0;i<number_str.size();i++) {
		int potencia = pow(10, (number_str.size() - (i + 1)));
		
		integer_number += integer(number_str[i]) * potencia;
	}
	
	return integer_number;
}

int integer(char string_number) {
	return string_number - 48;
}

int main(int argc, char* argv[]) {
	string instrucao;
	vector<int> estado_variaveis;
	
	while(cin >> instrucao) {
		int pos_sinal = find(instrucao.begin(), instrucao.end(), SOMA);
		
		if(pos_sinal == instrucao.end()) {
			int pos_atribuicao = find(instrucao.begin(), instrucao.end(), '=');
			
			int number = string_to_int(instrucao.substr(pos_atribuicao + 2));
			estado_variaveis.push_back(number);
		}
	}
	
	return 0;
}
