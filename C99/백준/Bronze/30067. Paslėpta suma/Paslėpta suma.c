#include <stdio.h>

int main() {
    int sum = 0;
    for(int i=0; i<10; i++) {
    	int tmp;
    	scanf("%d", &tmp);
    	
    	sum += tmp;
	}
	
	printf("%d\n", sum/2);
    return 0; 
}
