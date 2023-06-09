#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int a;
    float b;
    char c;
    char d[51];

    scanf("%d\n", &a);
    scanf("%f\n", &b);
    scanf("%c\n", &c);
    scanf("%[^\n]s", d);



    printf("%d%f%c%s\n", a, b, c, d);
    printf("%d\t%f\t%c\t%s\n", a, b, c, d);
    printf("%10d%10.6f%10c%10s\n", a, b, c, d);

    return 0;
}
