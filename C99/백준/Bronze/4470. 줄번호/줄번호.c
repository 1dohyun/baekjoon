#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	getchar();
	for(int i=0; i<n; i++) {
		char str[51];
		gets(str);
		printf("%d. %s\n", i+1, str);
	}
	
	return 0;
}
