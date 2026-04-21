#include <stdio.h>

int main() {
    int t, n;
    scanf("%d %d", &t, &n);
    
    for(int i=0; i<n; i++) {
    	int f;
    	scanf("%d", &f);
    	
    	t -= f;
	}
	
	if(t<=0)
		puts("Padaeng_i Happy");
	else
		puts("Padaeng_i Cry");
    return 0;
}
