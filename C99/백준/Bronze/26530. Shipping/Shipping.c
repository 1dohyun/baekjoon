#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		int x;
		scanf("%d", &x);
		
		float total = 0;
		for(int j=0; j<x; j++) {
			char str[101];
			float amount, price;
			
			scanf("%s %f %f", str, &amount, &price);
			total += amount*price;
		}
		
		printf("$%.2f\n", total);
	}
		
	return 0;
}
