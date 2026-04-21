#include <stdio.h>
#include <string.h>

int main() {
	char ab[10];
	scanf("%s", ab);
	
	int len = strlen(ab);
	
	if(len == 2)
		printf("%d\n", (ab[0]-'0') + (ab[1]-'0'));
	else if(len == 3) {
		if(ab[1]=='0')
			printf("%d\n", (ab[0]-'0')*10 + (ab[1]-'0') + (ab[2]-'0'));
		else
			printf("%d\n", (ab[0]-'0') + (ab[1]-'0')*10 + (ab[2]-'0'));
	}
	else
		printf("%d\n", (ab[0]-'0')*10 + (ab[1]-'0') + (ab[2]-'0')*10 + (ab[3]-'0'));
	
	return 0;
}
