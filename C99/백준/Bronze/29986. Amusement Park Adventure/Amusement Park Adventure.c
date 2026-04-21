#include <stdio.h>

int main() {
    int n, h, cnt = 0;
    scanf("%d %d", &n, &h);
    
    for(int i=0; i<n; i++) {
    	int a;
    	scanf("%d", &a);
    	
    	if(h>=a)
    		cnt++;
	}
	
	printf("%d\n", cnt);
    return 0;
}
