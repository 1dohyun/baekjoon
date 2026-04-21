#include <stdio.h>
#include <math.h>

int main() {
	int a, p;
	scanf("%d %d", &a, &p);
	
	if(7*a>13*p)
		puts("Axel");
	else if(7*a<13*p)
		puts("Petra");
	else
		puts("lika");
	
	return 0;
}
