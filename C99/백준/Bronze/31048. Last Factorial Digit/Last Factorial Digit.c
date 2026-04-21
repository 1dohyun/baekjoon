#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    for(int i=0; i<t; i++) {
    	int n;
    	scanf("%d", &n);
    	
    	int fact = 1;
    	
    	for(int i=1; i<=n; i++)
    		fact *= i;
    		
    	printf("%d\n", fact%10);
	}
	
    return 0;
}
