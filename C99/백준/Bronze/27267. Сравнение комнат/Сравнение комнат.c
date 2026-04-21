#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if(a*b>c*d)
        printf("M\n");
    else if(c*d>a*b)
        printf("P\n");
    else
        printf("E\n");
    
    return 0;
}
