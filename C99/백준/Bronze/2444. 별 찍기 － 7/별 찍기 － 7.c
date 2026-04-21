#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
	for(int i=1; i<=2*n-1; i++) {
		int t = n-i>0 ? n-i : -(n-i);
		
		for(int j=0; j<t; j++)
			printf(" ");
			
		for(int j=0; j<2*n-1-2*t; j++)
			printf("*");
        
		printf("\n");
	}
    return 0;
}
