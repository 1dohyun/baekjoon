#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	long long int angry = 0, sum = 0;
	for(int i=0; i<n; i++) {
		int tmp;
		scanf("%d", &tmp);
		
		if(tmp==0)
			angry--;
		else
			angry++;
		
		sum += angry;
	}
		
	printf("%lld\n", sum);
	return 0;
}
