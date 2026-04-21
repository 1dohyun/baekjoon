#include <stdio.h>

int main() {
	int n, a;
	scanf("%d %d", &n, &a);
    
    int cnt = 0;
    for(int i=0; i<n; i++) {
    	int ai;
    	scanf("%d", &ai);
    	
    	cnt += ai/a;
	}
	
	printf("%d\n", cnt);
    return 0;
}
