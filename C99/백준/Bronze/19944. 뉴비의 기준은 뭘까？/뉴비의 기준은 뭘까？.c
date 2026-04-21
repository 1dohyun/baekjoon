#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    if(m<=2)
    	puts("NEWBIE!");
    else if(m<=n)
    	puts("OLDBIE!");
    else
    	puts("TLE!");
    	
    return 0;
}
