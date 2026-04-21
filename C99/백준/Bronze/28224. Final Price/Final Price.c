#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
    	int tmp;
    	scanf("%d", &tmp);
    	sum += tmp;
	}
	
	printf("%d\n", sum);
    return 0;
}
