#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	while(n!=0) {
		int max = 0, arr[1001];
		
		for(int i=0; i<n; i++) {
			scanf("%d", &arr[i]);
			
			if(i==1)
				max = max<(arr[i]+arr[i-1]) ? arr[i]+arr[i-1] : max;
			else if(i>=2)
				max = max<(arr[i]+arr[i-1]+arr[i-2]) ? arr[i]+arr[i-1]+arr[i-2] : max;
			else
				max = max<arr[i] ? arr[i] : max;
		}
		
		printf("%d\n", max);
		scanf("%d", &n);
	}
	
	return 0;
}
