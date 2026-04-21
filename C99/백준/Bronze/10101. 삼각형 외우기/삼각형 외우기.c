#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int sum = a+b+c;
    
    if(a == 60 && b == 60 && c == 60)
    	puts("Equilateral");
    else if(sum == 180 && (a==b || b==c || a==c))
    	puts("Isosceles");
    else if(sum == 180)
    	puts("Scalene");
    else
    	puts("Error");
    
    return 0;
}
