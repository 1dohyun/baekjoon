#include <stdio.h>
#define size 20000001

int arr[size];
int freq[size] = {0};
	
int main() {
	int n, m, tmp;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	for(int i=0; i<n; i++)
		freq[arr[i] + size/2-1]++;
	
	scanf("%d", &m);
	for(int i=0; i<m; i++) {
		scanf("%d", &tmp);
		printf("%d ", freq[tmp + size/2-1]);
	}
	
	return 0;
}
