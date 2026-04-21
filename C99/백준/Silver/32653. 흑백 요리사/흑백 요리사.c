#include <stdio.h>

int main() {
    int n, x;
    unsigned long long time;

    scanf("%d", &n);
    scanf("%d", &x);
    time = x;

    for(int i=1; i<n; i++) {
        scanf("%d", &x);

        unsigned long long a = time, b = x;
        while(b!=0) {
            unsigned long long temp = a%b;
            a = b;
            b = temp;
        }

        time = (time/a)*x;
    }

    printf("%lld", time*2);
    return 0;
}
