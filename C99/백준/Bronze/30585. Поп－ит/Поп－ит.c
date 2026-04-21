#include <stdio.h>

int main() {
    int h, w, a = 0, b = 0;
    scanf("%d %d", &h, &w);
    
    for(int i=0; i<h; i++) {
    	for(int j=0; j<w; j++) {
    		char c;
    		scanf(" %c", &c);
    		
    		if(c=='0')
    			a++;
    		else
    			b++;
		}
	}
    
    printf("%d\n", a<b ? a : b);
    return 0;
}
