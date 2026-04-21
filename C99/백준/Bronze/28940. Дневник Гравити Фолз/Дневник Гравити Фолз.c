#include <stdio.h>

int main() {
    int w, h;
    scanf("%d %d", &w, &h);
    
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    
    if(a>w || b>h) {
        puts("-1");
        return 0;
    }
	
	int t = (w/a)*(h/b);
    printf("%d\n", (t+n-1)/t);
    
    return 0;
}
