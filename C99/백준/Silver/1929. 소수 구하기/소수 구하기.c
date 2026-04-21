#include <stdio.h>
#include <math.h>

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	
	int prime[n-m+1];
	for(int i=0; i<n-m+1; i++)
		prime[i] = 1;
	
	if(m==1)
		prime[0] = 0;
	
	for(int i=2; i<=(int)sqrt(n); i++) {
		int start = ((m+i-1)/i)*i;
		
		if(start==i)
			start += i;
		
		for(int j=start; j<=n; j+=i)
			prime[j-m] = 0;
	}
	
	for(int i=0; i<n-m+1; i++) {
		if(prime[i])
			printf("%d\n", i+m);
	}
	
    return 0;
}
