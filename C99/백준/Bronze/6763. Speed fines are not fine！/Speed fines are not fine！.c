#include <stdio.h>

int main() {
	int limit, speed;
	scanf("%d %d", &limit, &speed);
	
	int diff = speed-limit;
	if(speed<=limit)
		puts("Congratulations, you are within the speed limit!");
	else if(diff<=20)
		puts("You are speeding and your fine is $100.");
	else if(diff<=30)
		puts("You are speeding and your fine is $270.");
	else
		puts("You are speeding and your fine is $500.");
		
	return 0;
}
