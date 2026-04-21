#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	if(n>=5)
		puts("0");
	else {
		int total = 1;
		
		for(int i=2; i<=n; i++)
			total *= i;
		printf("%d\n", total%10);
	}
		
		
	return 0;
}
