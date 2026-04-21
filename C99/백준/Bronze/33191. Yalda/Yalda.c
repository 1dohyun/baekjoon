#include <stdio.h>

int main() {
	int b, water, pome, nuts;
	scanf("%d %d %d %d", &b, &water, &pome, &nuts);
	
	if(b<water && b<pome && b<nuts)
		puts("Nothing");
	else if(b>=water)
		puts("Watermelon");
	else if(b>=pome)
		puts("Pomegranates");
	else
		puts("Nuts");
	
    return 0;
}
