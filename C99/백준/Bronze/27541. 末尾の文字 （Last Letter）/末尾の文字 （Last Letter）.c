#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	char str[101];
	scanf("%s", str);
	
	if(str[n-1]=='G')
		str[n-1] = '\0';
	else {
		str[n] = 'G';
		str[n+1] = '\0';
	}
	
	printf("%s\n", str);
    return 0;
}
