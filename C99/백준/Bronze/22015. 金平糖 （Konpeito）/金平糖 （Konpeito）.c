#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	int m = a;
	m = b>m ? b : m;
	m = c>m ? c : m;
	
	printf("%d\n", 3*m-a-b-c);
	return 0;
}
