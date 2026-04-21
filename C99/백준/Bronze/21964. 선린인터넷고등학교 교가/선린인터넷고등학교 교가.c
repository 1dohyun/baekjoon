#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char str[n];
    scanf("%s", str);
    
    for(int i=n-5; i<n; i++)
    	putchar(str[i]);
    	
    return 0;
}
