#include <stdio.h>

int main() {
    int k, d, a;
    scanf("%d/%d/%d", &k, &d, &a);
    
    if(d==0 || k+a<d)
    	puts("hasu");
    else
    	puts("gosu");
    return 0;
}
