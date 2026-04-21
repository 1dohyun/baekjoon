#include <stdio.h>

int main() {
	
    for(int i=0; i<15; i++) {
    	for(int j=0; j<15; j++) {
    		char p;
    		scanf(" %c", &p);
    		
    		if(p=='w') {
    			puts("chunbae");
    			return 0;
			} else if(p=='b') {
				puts("nabi");
				return 0;
			} else if(p=='g') {
				puts("yeongcheol");
				return 0;
			}
		}
	}
	
    return 0;
}
