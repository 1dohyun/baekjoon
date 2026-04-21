#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	char str[n];
	scanf("%s", str);
	
	for(int i=0; i<n; i++) {
		char c = str[i];
		
		if(c=='I')
			putchar('i');
		else
			putchar('L');
	}
		
    return 0;
}
