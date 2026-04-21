#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	char str[101];
	scanf("%s", str);
	
	for(int i=0; i<n; i++) {
		if(str[i+1]=='J')
			printf("%c\n", str[i]);
	}
	
	return 0;
}
