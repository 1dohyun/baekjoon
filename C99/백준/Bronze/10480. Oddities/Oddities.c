#include <stdio.h>

int main() {
   	int n;
   	scanf("%d", &n);
   	
   	for(int i=0; i<n; i++) {
   		int x;
   		scanf("%d", &x);
   		
   		printf("%d is %s\n", x, x%2==0 ? "even" : "odd");
	}
   	
	return 0;
}
