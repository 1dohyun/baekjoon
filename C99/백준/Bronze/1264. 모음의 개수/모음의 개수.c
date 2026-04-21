#include <stdio.h>
#include <string.h>

int main() {
    char str[256];
    gets(str);
    
    while(strcmp(str, "#")!=0) {
    	int count = 0;
    	
    	for(int i=0; str[i]!='\0'; i++) {
    		char c = str[i];
    		
    		if(c<'a')
    			c = c+('a'-'A');
    		
    		if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    			count++;
		}
		
		printf("%d\n", count);
    	gets(str);
	}
    
    return 0;
}
