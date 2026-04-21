#include <stdio.h>

int main() {
    long long m, n;
    scanf("%lld %lld", &m, &n);
    
    long long result;
    if(m==1)
        result = n;
    else if(n==1)
        result = m;
    else
        result = 2*(m+n)-4;
    
    printf("%lld\n", result);
    return 0;
}
