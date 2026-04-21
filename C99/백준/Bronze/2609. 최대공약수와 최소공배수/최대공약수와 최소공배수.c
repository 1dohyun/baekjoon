#include <stdio.h>

int main() {
    int a, b, max = 0;
    scanf("%d %d", &a, &b);
    
    for(int i=1; i<=10000; i++) {
    	if(a%i == 0 && b%i == 0)
    		max = max>i ? max : i;
	}
	printf("%d\n", max);
	
	for(int i=1; ; i++) {
		if(i%a == 0 && i%b == 0) {
			printf("%d\n", i);
			break;
		}
	}
    return 0;
}
