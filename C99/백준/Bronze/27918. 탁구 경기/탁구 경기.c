#include <stdio.h>

int main() {
    int n, x = 0, y = 0;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
    	char c;
    	scanf(" %c", &c);
    	
    	if(c=='D')
    		x++;
    	else
    		y++;
    	
    	if(x+2<=y || y+2<=x)
    		break;
	}
	
	printf("%d:%d\n", x, y);
    return 0;
}
