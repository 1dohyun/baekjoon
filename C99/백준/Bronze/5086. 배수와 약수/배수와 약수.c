#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    while(a != 0 && b != 0) {
    	if(b%a == 0)
    		puts("factor");
    	else if(a%b == 0)
    		puts("multiple");
    	else
    		puts("neither");
    	
    	scanf("%d %d", &a, &b);
	}
	
    return 0;
}
