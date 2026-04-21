#include <stdio.h>

int main() {
    int c, p, m, a, s, z;
    scanf("%d %d %d %d %d %d", &c, &p, &m, &a, &s, &z);

    int C, P, M, A, S, Z;
    scanf("%d %d %d %d %d %d", &C, &P, &M, &A, &S, &Z);

    float cho = 13*c + 7*p + 5*m + 3*a + 3*s + 2*z;
    float han = 13*C + 7*P + 5*M + 3*A + 3*S + 2*Z + 1.5;

    if (cho >= han) {
        puts("cocjr0208");
    } else {
        puts("ekwoo");
    }

    return 0;
}
