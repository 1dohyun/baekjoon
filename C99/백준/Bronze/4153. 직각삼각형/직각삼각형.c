#include <stdio.h>

int main() {
    int a, b, c;
    
    while (scanf("%d %d %d", &a, &b, &c) && (a != 0 || b != 0 || c != 0)) {
        int max = a;
        
        if (b > max) max = b;
        if (c > max) max = c;

        int sum = a*a + b*b + c*c - max*max;

        if (sum == max*max)
            puts("right");
        else
            puts("wrong");
    }

    return 0;
}
