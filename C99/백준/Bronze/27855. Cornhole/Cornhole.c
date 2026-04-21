#include <stdio.h>

int main() {
	int h1, b1;
	scanf("%d %d", &h1, &b1);
	
	int h2, b2;
	scanf("%d %d", &h2, &b2);
	
	int s1 = h1*3 + b1;
	int s2 = h2*3 + b2;
	
	if(s1>s2)
		printf("1 %d\n", s1-s2);
	else if(s2>s1)
		printf("2 %d\n", s2-s1);
	else
		puts("NO SCORE");
    
    return 0;
}
