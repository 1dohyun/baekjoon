#include <stdio.h>

int main() {
    int n, num[10] = {0,};
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
    	int x;
    	scanf("%d", &x);
    	
    	num[x] = 1;
	}
	
	for(int i=0; i<=9; i++) {
		if(num[i])
			printf("%d\n", i);
	}
	
    return 0;
}
