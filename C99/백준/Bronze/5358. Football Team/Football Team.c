#include <stdio.h>

int main() {
	char str[101];
	
	while(gets(str)!=NULL) {
		for(int i=0; str[i]!='\0'; i++) {
			char c = str[i];
			
			switch(c) {
				case 'e': printf("i"); break;
				case 'E': printf("I"); break;
				case 'i': printf("e"); break;
				case 'I': printf("E"); break;
				default: printf("%c", c);
			}
		}
		putchar('\n');
	}
	
	return 0;
}
