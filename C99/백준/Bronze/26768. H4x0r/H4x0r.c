#include <stdio.h>

int main() {
    char str[1000001];
    scanf("%s", str);
	
	for(int i=0; str[i]!='\0'; i++) {
		char c = str[i];
		
		if(c=='a') str[i] = '4';
		if(c=='e') str[i] = '3';
		if(c=='i') str[i] = '1';
		if(c=='o') str[i] = '0';
		if(c=='s') str[i] = '5';
	}
	
	printf("%s\n", str);
    return 0; 
}
