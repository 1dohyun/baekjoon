#include <stdio.h>


int main() {
	char str[102];
	fgets(str, 102, stdin);
	
	while(1) {
		if(str[0]=='.' && str[1]=='\n' && str[2]=='\0')
			break;
			
		char stack[102];
		
		int cursor = 0;
		int yes = 1;
		
		for(int i=0; str[i]!='\0'; i++) {
			char ch = str[i];
			
			if(ch=='(' || ch=='[')
				stack[cursor++] = ch;
			
			if(ch==')' || ch==']') {
				if(cursor==0) {
					yes = 0;
					break;
				} else {
					if((stack[cursor-1]=='(' && ch==')') || (stack[cursor-1]=='[' && ch==']'))
						cursor--;
					else {
						yes = 0;
						break;
					}
				}
			}
		}
		
		if(cursor!=0)
			yes = 0;
		
		printf("%s\n", yes ? "yes" : "no");
		fgets(str, 102, stdin);
	}
	
	return 0;
}
