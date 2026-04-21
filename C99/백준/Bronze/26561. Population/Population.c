#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
    	long long p, t;
    	scanf("%lld %lld", &p, &t);
    	
    	printf("%lld\n", p+t/4-t/7);
	}
	
    return 0;
}
