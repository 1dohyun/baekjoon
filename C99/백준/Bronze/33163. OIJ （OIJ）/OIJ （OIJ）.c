#include <stdio.h>

int main() {
	int n;
	char str[101];
	scanf("%d %s", &n, str);
	
	for(int i=0; i<n; i++) {
		char c = str[i];
		
		if(c=='J')
			printf("O");
		else if(c=='O')
			printf("I");
		else
			printf("J");
	}
	
	return 0;
}
