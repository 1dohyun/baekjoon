#include <stdio.h>

int main() {
    double x;
    scanf("%lf", &x);
    
    printf("%.6lf", (3.785411784*100)/(x*1.609344));
    return 0;
}
