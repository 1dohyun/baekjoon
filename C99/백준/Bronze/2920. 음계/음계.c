#include <stdio.h>

int main() {
    char s[50];
    gets(s);
    
    int count = 0;
    for(int i=0; s[i]!='\0'; i++) {
    	if(s[i]-'0'+1 == s[i+2]-'0')
    		count++;
    	else if(i==14 && count==7) {
    		puts("ascending");
    		return 0;
		}	
	}
	
	count = 0;
	for(int i=0; s[i]!='\0'; i++) {
    	if(s[i]-'0'-1 == s[i+2]-'0')
    		count++;
    	else if(i==14 && count==7) {
			puts("descending");
    		return 0;
		}		
	}
	
	puts("mixed");
    return 0;
}
