#include <stdio.h>

int main() {
    int a, b=0, c=0;
    scanf("%d", &a);
    
    int d[10000] = {0};
    
    while(a != -1) {
    	for(int i=1; i<a; i++) {
    		if(a%i==0) {
    			b += i;
    			d[c++] = i;
			}
		}
		
		if(b == a) {
			printf("%d = ", a);
			for(int i=0; i<c; i++) {
				if(i!=c-1)
					printf("%d + ", d[i]);
				else
					printf("%d", d[i]);
			}
		} else
			printf("%d is NOT perfect.", a);
		
		printf("\n");
    	scanf("%d", &a);
    	b=c=0;
	}
	
    return 0;
}
