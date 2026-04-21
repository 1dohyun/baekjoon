#include <stdio.h>
#define mod 1000000007

int main() {
	int n;
	scanf("%d", &n);
	
	long long dp[1516][3] = {0};
	dp[0][0] = 1;
	
	for(int p=0; p<n-1; p++) {
		for(int m=0; m<3; m++) {
			int nm = (m+1)%3;
			dp[p+1][nm] = (dp[p+1][nm] + dp[p][m])%mod;
			
			nm = (m+5)%3;
			dp[p+1][nm] = (dp[p+1][nm] + dp[p][m])%mod;
		}
	}
	
	printf("%lld\n", dp[n-1][1]);
	return 0;
}
