#include <stdio.h>

int main() {
    int n, b, index;
    scanf("%d %d", &n, &b);
    
    if(n==0) {
		puts("0");
		return 0;
	}	
    
    char stack[256] = {'\0'};
    while(n>0) {
    	int m = n%b;
    	
    	if(m<10)
    		stack[index] = m+'0';
    	else
    		stack[index] = m+'A'-10;
		
		n/=b;
		++index;
	}
	
	for(int i=index-1; i>=0; i--)
		printf("%c", stack[i]);
	
    return 0;
}
