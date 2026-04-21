#include <stdio.h>

int main() {
	int cola, beer, chicken;
	scanf("%d", &chicken);
	scanf("%d %d", &cola, &beer);
	
	int eat = cola/2+beer;
	if(eat>chicken)
		eat = chicken;
	
	printf("%d\n", eat);
	return 0;
}
