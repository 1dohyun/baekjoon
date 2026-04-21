#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    if(m-n+14==0)
    	printf("%d\n", m+7);
    else {
    	int r = (m+7)%(m-n+14);
    	if(r==0)
    		r = m-n+14;
    		
    	printf("%d\n", r);
	}
    	
    	
    return 0;
}
