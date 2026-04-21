#include <stdio.h>

int main() {
    int t, sum, count;
    scanf("%d", &t);
    
    char ox[80];
    for(int i=0; i<t; i++) {
    	scanf("%s", ox);
    	sum = count = 0;
    	
    	for(int j=0; ox[j]!='\0'; j++) {	
    		if(ox[j]=='O') {
    			count++;
    			sum += count;
			} else
				count = 0;
		}
		
		printf("%d\n", sum);
	}
	
    return 0;
}
