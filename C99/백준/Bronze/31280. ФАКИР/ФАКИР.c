#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    int t1 = b+c+d+1;
    int t2 = a+c+d+1;
    int t3 = a+b+d+1;
    int t4 = a+b+c+1;
    
    int t5 = t1;
    if(t2>t5) t5 = t2;
    if(t3>t5) t5 = t3;
    if(t4>t5) t5 = t4;
    
    printf("%d\n", t5);
    return 0;
}
