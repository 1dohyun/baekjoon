#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d, min;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    int t1 = fabs((a+b)-(c+d));
    int t2 = fabs((b+d)-(a+c));
    min = t1>t2 ? t2 : t1;
    
    int t3 = fabs((a+d)-(b+c));
    min = min>t3 ? t3 : min;
    
    printf("%d\n", min);
    return 0;
}
