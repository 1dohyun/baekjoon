#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);
    
    for(b=0; b*(b+1)/2<a; b++);
    c = a-(b*(b-1)/2+1);
    
    if(b%2!=0)
    	printf("%d/%d", b-c, c+1);
    else
    	printf("%d/%d", c+1, b-c);
    	
    return 0;
}
