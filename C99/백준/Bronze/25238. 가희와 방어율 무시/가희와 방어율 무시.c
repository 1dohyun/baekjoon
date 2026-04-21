#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
	
	if(a-(double)a/100*b<100)
		puts("1");
	else
		puts("0");
    return 0;
}
