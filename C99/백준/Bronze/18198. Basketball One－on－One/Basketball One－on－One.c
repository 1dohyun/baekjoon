#include <stdio.h>
#include <string.h>

int main() {
	char str[201];
	scanf("%s", str);
	
	int a = 0, b = 0;
	for(int i=0; i<strlen(str); i+=2) {
		if(str[i]=='A')
			a += str[i+1]-'0';
		else
			b += str[i+1]-'0';
		
		if((a>=11 || b>=11) && ((a>=10 && b>=10) ? (a-b>=2 || b-a>=2) : 1)) {
			printf("%c\n", a>b ? 'A' : 'B');
			return 0;
		}
	}
	
	return 0;
}
