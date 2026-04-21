#include <stdio.h>

int main() {
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);
    
    int primes[10000] = {0};
    int sum = 0, count = 0;
    
    for(int i=m; i<=n; i++) {
    	if(i<2) continue;
    	
    	int is = 1;
    	for(int j=2; j<i; j++) {
    		if(i%j==0) is = 0;
		}
		
		if(is) {
			sum += i;
			primes[count++] = i;
		}
	}
	
	if(primes[0]==0)
		printf("-1");
	else
		printf("%d\n%d", sum, primes[0]);
	
    return 0;
}
