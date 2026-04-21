#include <stdio.h>
#include <string.h>

int cmp(char a[], char b[]) {
	return strcmp(a, b) == 0;
}

int main() {
    char s[3];
    scanf("%s", s);
    
    if(cmp(s, "A+"))
    	printf("4.3");
    if(cmp(s, "A0"))
    	printf("4.0");
    if(cmp(s, "A-"))
    	printf("3.7");
    
    if(cmp(s, "B+"))
    	printf("3.3");
    if(cmp(s, "B0"))
    	printf("3.0");
    if(cmp(s, "B-"))
    	printf("2.7");
    	
    if(cmp(s, "C+"))
    	printf("2.3");
    if(cmp(s, "C0"))
    	printf("2.0");
    if(cmp(s, "C-"))
    	printf("1.7");
    	
    if(cmp(s, "D+"))
    	printf("1.3");
    if(cmp(s, "D0"))
    	printf("1.0");
    if(cmp(s, "D-"))
    	printf("0.7");
    
    if(cmp(s, "F"))
    	printf("0.0");
    	
    return 0;
}
