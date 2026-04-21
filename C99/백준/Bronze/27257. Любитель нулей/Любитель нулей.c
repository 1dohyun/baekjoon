#include <stdio.h>

int main() {
    long long k;
    scanf("%lld", &k);
    
    int cnt = 0;
    while(k%10==0)
        k /= 10;
    
    while(k>0) {
        if(k%10==0)
            cnt++;
        k /= 10;
    }
    
    printf("%d\n", cnt);
    return 0;
}
