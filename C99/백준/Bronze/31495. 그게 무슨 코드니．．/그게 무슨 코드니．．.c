#include <stdio.h>
#include <string.h>

int main() {
	char str[51];
	gets(str);
	
	if(str[0]=='\"' && str[strlen(str)-1]=='\"' && strlen(str)>2)
		printf("%.*s\n", (int)strlen(str)-2, str+1);
	else
		puts("CE");
		
	return 0;
}
