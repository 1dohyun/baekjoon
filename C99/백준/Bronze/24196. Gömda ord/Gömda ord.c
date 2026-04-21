#include <stdio.h>
#include <string.h>

int main() {
	char str[51];
	scanf("%s", str);
	
	int i = 0, len = strlen(str);
	
	while(i<len) {
		printf("%c", str[i]);
		
		if(i==len-1)
			break;
		i += str[i]-'A'+1;
	}
	
	return 0;
}
