#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    for(int i=0; i<t; i++) {
    	int n, a, d;
    	scanf("%d %d %d", &n, &a, &d);
    	
    	printf("%d\n", n*(2*a+(n-1)*d)/2);
	}
	
    return 0; 
}
