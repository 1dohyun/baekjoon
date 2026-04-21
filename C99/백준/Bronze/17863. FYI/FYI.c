#include <stdio.h>

int main() {
	char str[8];
	scanf("%s", str);
	
	if(str[0]=='5' && str[1]=='5' && str[2]=='5')
		puts("YES");
	else
		puts("NO");
	
	return 0;
}
