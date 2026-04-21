#include <stdio.h>

int main() {
	char x[200], y[200];
	scanf("%s", x);
	
	for(int i=0; i<1000; i++) {
		int fx = (x[0]-'0') * strlen(x);
		
		sprintf(y, "%d", fx);
		if(strcmp(x, y)==0) {
			puts("FA");
			return 0;
		}
		
		strcpy(x, y);
	}
	
	puts("NFA");
	return 0;
}
