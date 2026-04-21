#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if(n==0) {
        puts("1");
        return 0;
	}
    
    int total = n;
    while(n>1)
        total *= --n;
    
    printf("%d", total);
    return 0;
}
