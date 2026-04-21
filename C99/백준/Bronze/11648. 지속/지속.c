#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    int happy = 0;

    while(n>=10) {
        long long p = 1, tmp = n;
        
        while(tmp>0) {
            p *= tmp%10;
            tmp /= 10;
        }

        n = p;
        happy++;
    }

    printf("%d\n", happy);
    return 0;
}
