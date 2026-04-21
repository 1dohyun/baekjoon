#include <stdio.h>
#include <string.h>

int check(char* str, char c) {
	return strchr(str, c)!=NULL;
}

int main() {
	char str[101];
	scanf("%s", str);
	
	if(check(str, 'M') && check(str, 'O') && check(str, 'B') && check(str, 'I') && check(str, 'S'))
		puts("YES");
	else
		puts("NO");
	
	return 0;
}
