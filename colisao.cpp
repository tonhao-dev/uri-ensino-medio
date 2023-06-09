#include <iostream>

using namespace std;

typedef struct {
	int x, y;
} tipo_ponto;

int main(int argc, char* argv[]) {
	int num_casos;	
	cin >> num_casos;
	
	for(int num_teste=0; num_teste<num_casos; num_teste++) {
		tipo_ponto a, b, c, d, robo;
		cin >> a.x >> a.y;
		cin >> b.x >> b.y;
		cin >> c.x >> c.y;
		cin >> d.x >> d.y;
		cin >> robo.x >> robo.y;
		
		cout << (robo.x >= a.x and robo.x <= b.x and robo.y >= a.y and robo.y <= d.y) << endl;
	}
	
	return 0;
}

