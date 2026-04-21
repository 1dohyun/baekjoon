#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int A = a%10*100 + a%100-a%10 + (a-a%100)/100;
    int B = b%10*100 + b%100-b%10 + (b-b%100)/100;
    
	if(A>B)
		printf("%d", A);
	else
		printf("%d", B);
	
    return 0;
}
