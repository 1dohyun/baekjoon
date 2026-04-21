#include <stdio.h>

int main() {
    int h, l, a, b;
    scanf("%d %d %d %d", &h, &l, &a, &b);
    
    int yes = 0;
    if(l>=a && h>=(b+1)/2)
		yes = 1;
		
    if(l>=b && h>=(a+1)/2)
		yes = 1;
    
    printf("%s\n", yes ? "YES" : "NO");
    return 0;
}
