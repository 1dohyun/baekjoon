#include <stdio.h>

int main() {
	int n, arr[50];
	scanf("%d", &n);
	
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);
		
	int left = 0, last = 0;
	
	for(int i=0; i<n; i++) {
		if(arr[i]>last) {
			last = arr[i];
			left++;
		}	
	}
	
	int right = 0;
	last = 0;
	
	for(int i=n-1; i>=0; i--) {
		if(arr[i]>last) {
			last = arr[i];
			right++;
		}	
	}

	printf("%d\n%d\n", left, right);
	return 0;
}
