#include <stdio.h>

int main() {
    char str[101];
    scanf("%s", str);
    
    for(int i=0; str[i]!='\0'; i++) {
    	char c = str[i];
    	if(c>'Z')
    		printf("%c", c-('a'-'A'));
    	else
    		printf("%c", c+('a'-'A'));
	}
    	
    return 0;
}
