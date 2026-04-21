#include <stdio.h>

int main() {
	int n, day;
	scanf("%d", &n);
	
	long long min;
	for(int i=0; i<n; i++) {
		long long tmp;
		scanf("%lld", &tmp);
		
		if(i==0 || tmp<min) {
			min = tmp;
			day = i;
		}
	}
	
	printf("%d\n", day);
	return 0;
}
