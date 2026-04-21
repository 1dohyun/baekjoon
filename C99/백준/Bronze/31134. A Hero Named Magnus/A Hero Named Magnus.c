#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    for(int i=0; i<t; i++) {
    	long long x;
    	scanf("%lld", &x);
    	
    	printf("%lld\n", 2*x-1);
	}
	
    return 0;
}
