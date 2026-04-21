#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	if(n<=100000)
		printf("%s\n", n%2024==0 ? "Yes" : "No");
	else
		puts("No");
		
	return 0;
}
