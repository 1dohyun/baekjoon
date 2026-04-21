#include <stdio.h>
#include <string.h>

int main() {
	char str[501];
	gets(str);
	
	while(strcmp(str, "END")!=0) {
		for(int i=strlen(str)-1; i>=0; i--)
			printf("%c", str[i]);
		putchar('\n');
		gets(str);
	}
	
	return 0;
}
