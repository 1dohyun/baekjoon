#include <stdio.h>

int max(int a, int b) {
	return a>b ? a : b;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int stairs[n], dp[n];
    for(int i=0; i<n; i++)
    	scanf("%d", &stairs[i]);
    
    dp[0] = stairs[0];
    
    if(n>=2)
    	dp[1] = stairs[0] + stairs[1];
    	
    if(n>=3)
    	dp[2] = max(stairs[0] + stairs[2], stairs[1] + stairs[2]);
	
	for(int i=3; i<n; i++)
		dp[i] = max(dp[i-2]+stairs[i], dp[i-3]+stairs[i-1]+stairs[i]);
	
	printf("%d\n", dp[n-1]);
    return 0;
}
