#include <stdio.h>

int main() {
    int tmp, total = 0;  
    scanf("%d", &tmp);
    
    while(tmp!=-1) {
    	total += tmp;
    	scanf("%d", &tmp);
	}
	
	printf("%d\n", total);
    return 0;
}
