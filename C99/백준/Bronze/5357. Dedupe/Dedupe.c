#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		char str[101];
		scanf("%s", str);
		
		for(int i=0; str[i]!='\0'; i++) {
			char c = str[i];
			
			if(i!=0) {
				if(c!=str[i-1])
					printf("%c", c);
			} else
				printf("%c", c);
		}
		putchar('\n');
	}
	
	return 0;
}
