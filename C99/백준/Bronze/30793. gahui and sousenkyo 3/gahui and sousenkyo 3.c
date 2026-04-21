#include <stdio.h>

int main() {
    double p, r;
    scanf("%lf %lf", &p, &r);
    
    double v = p/r;
    if(v<0.2)
    	puts("weak");
    else if(v<0.4)
    	puts("normal");
    else if(v<0.6)
    	puts("strong");
    else
    	puts("very strong");
    
    return 0;
}
