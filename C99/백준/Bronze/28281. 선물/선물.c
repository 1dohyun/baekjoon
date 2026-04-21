#include <stdio.h>

int main() {
	int n;
	long long x;
	scanf("%d %lld", &n, &x);
	
	int a[100000];
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	
	long long min = (long long)(a[0]+a[1])*x;
	for(int i=1; i<n-1; i++) {
		long long price = (long long)(a[i]+a[i+1])*x;
		min = price<min ? price : min;
	}
	
	printf("%lld\n", min);
    return 0;
}
