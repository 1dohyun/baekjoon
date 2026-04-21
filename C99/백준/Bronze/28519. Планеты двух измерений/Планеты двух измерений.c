#include <stdio.h>

int main() {
    long long n, m;
    scanf("%lld %lld", &n, &m);
    
    if(n>m) {
    	long long tmp = n;
    	n = m;
    	m = tmp;
	}
    
    if(m-n<=1)
        printf("%lld\n", n+m);
    else
        printf("%lld\n", 2*n+1);
    
    return 0;
}
