#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    int a = 100-x, b = 100-y, c = 100-(a+b), d = a*b;
    printf("%d %d %d %d %d %d\n", a, b, c, d, d/100, d%100);
    printf("%d %d\n", c+d/100, d%100);
	
    return 0;
}
