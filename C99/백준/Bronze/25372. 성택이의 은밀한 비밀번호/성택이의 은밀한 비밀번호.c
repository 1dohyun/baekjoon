#include <stdio.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		char str[1001];
		scanf("%s", str);
		
		if(strlen(str)>=6 && strlen(str)<=9)
			puts("yes");
		else
			puts("no");
	}
	
	return 0;
}