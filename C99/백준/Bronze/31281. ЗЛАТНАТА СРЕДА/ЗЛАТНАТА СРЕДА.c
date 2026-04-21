#include <stdio.h>

int main() {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    
    if((a>b&&a<c) || (a<b&&a>c))
    	printf("%lld\n", a);
    else if((b>a&&b<c) || (b<a&&b>c))
    	printf("%lld\n", b);
    else
    	printf("%lld\n", c);
    
    return 0;
}
