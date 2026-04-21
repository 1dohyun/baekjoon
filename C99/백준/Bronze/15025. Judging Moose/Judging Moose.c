#include <stdio.h>

int main() {
	int l, r;
	scanf("%d %d", &l, &r);
	 
    if(l==0 && r==0)
    	puts("Not a moose");
    else {
    	if(l==r)
    		printf("Even %d\n", r*2);
    	else
    		printf("Odd %d\n", l>r ? l*2 : r*2);
	}
	
    return 0;
}
