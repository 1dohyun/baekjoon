#include <stdio.h>

int main() {
	int g, p, t;
	scanf("%d %d %d", &g, &p, &t);
	
	int indiv = g*p, group = g+p*t;
	
	if(indiv<group)
		puts("1");
	else if(group<indiv)
		puts("2");
	else
		puts("0");
		
	return 0;
}
