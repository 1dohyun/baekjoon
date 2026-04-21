#include <stdio.h>

int main() {
	int arr[5];
	
	for(int i=0; i<5; i++)
		scanf("%d", &arr[i]);
	
	int sum = 0;
	for(int i=0; i<5; i++) {
		int min = i;
		
		for(int j=i; j<5; j++) {
			if(arr[min]>arr[j])
				min = j;
		}
		
		int tmp = arr[i];
		arr[i] = arr[min];
		arr[min] = tmp;
	}
	
	for(int i=0; i<5; i++)
		sum += arr[i];
	
	printf("%d\n%d\n", sum/5, arr[2]);
	return 0;
}