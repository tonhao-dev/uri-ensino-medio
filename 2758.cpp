#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b;
    double c, d;
    cin >> a >> b >> c >> d;

    printf("A = %f, B = %f\n", a, b);
    printf("C = %lf, D = %lf\n", c, d);

    printf("A = %.1f, B = %.1f\n", a, b);
    printf("C = %.1lf, D = %.1lf\n", c, d);

    printf("A = %.2f, B = %.2f\n", a, b);
    printf("C = %.2lf, D = %.2lf\n", c, d);

    printf("A = %.3f, B = %.3f\n", a, b);
    printf("C = %.3lf, D = %.3lf\n", c, d);

    printf("A = %.3E, B = %.3E\n", a, b);
    printf("C = %.3E, D = %.3E\n", c, d);

    round(a);round(b);round(c);round(c);
    printf("A = %.0f, B = %0.f\n", a, b);
    printf("C = %.0f, D = %.0f\n", c, d);

    return 0;
}
