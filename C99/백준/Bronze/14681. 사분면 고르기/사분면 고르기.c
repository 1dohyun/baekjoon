#include <stdio.h>

int main() {
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    
    if(x > 0) { //x가 양수일때 -> 1,4 사분면 
    	if(y > 0) {
    		printf("1");
		} else {
			printf("4");
		}
	} else { //x가 음수일때 -> 2,3 사분면 
		if(y > 0) {
			printf("2");
		} else {
			printf("3");
		}
	}
    return 0;
}