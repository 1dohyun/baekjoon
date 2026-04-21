#include <stdio.h>

int main() {
	char str[32];
	scanf("%s", str);
	
	int diff = 0;
	for(int i=0; str[i]!='\0'; i++) {
		char c = str[i];
		
		if(c==':')
			diff++;
		else if(c=='_')
			diff += 5;
	}
	
	printf("%d\n", diff+strlen(str));
	return 0;
}
