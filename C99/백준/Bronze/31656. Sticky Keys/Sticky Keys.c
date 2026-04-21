#include <stdio.h>

int main() {
	char str[1001];
	gets(str);
	
	for(int i=0; str[i]!='\0'; i++) {
		if(i>0) {
			if(str[i]!=str[i-1])
				printf("%c", str[i]);
		} else
			printf("%c", str[i]);
	}
	
	return 0;
}
