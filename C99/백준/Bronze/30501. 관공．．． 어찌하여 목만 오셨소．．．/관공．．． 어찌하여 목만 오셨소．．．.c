#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		char str[101];
		scanf("%s", str);
		
		for(int j=0; str[j]!='\0'; j++) {
			if(str[j]=='S') {
				printf("%s\n", str);
				break;
			}
		}
	}
	
	return 0;
}
