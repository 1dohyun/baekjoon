#include <stdio.h>
#include <string.h>

int main() {
	int tmp, max = 0;
	char str[30], big[30];
	
    for(int i=0; i<7; i++) {
    	scanf("%s %d", str, &tmp);
    	
    	if(tmp>max) {
    		max = tmp;
    		strcpy(big, str);
		}
	}
	
	printf("%s\n", big);
    return 0;
}
