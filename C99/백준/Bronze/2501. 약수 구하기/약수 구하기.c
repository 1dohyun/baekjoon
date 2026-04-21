#include <stdio.h>

int main() {
    int a, b, c = 0;
    scanf("%d %d", &a, &b);
    
    int d[10000] = {0};
    
    for(int i=a; i>0; i--) {
    	if(a%i==0)
    		d[c++] = i;
	}
	
	if(b<=c)
        printf("%d", d[c-b]);
    else
        puts("0");
    
    return 0;
}
