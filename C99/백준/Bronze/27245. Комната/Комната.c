#include <stdio.h>

int main() {
    int w, l, h;
    scanf("%d %d %d", &w, &l, &h);
    
    int min = w<l ? w : l;
    int max = w>l ? w : l;
    
    if(min>=2*h && max<=2*min)
        puts("good");
    else
        puts("bad");
    
    return 0;
}
