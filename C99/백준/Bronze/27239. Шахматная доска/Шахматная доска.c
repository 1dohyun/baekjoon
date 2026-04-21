#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i=0; i<8; i++) {
    	for(int j=1; j<=8; j++) {
    		if(8*i+j==n) {
    			printf("%c%d\n", 'a'+j-1, i+1);
    			return 0;
			}
		}
	}
	
    return 0;
}
