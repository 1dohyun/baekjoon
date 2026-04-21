#include <stdio.h>

int main() {
    int t, temp;
    scanf("%d", &t);
    
    for(int i=0; i<t; i++) {
    	scanf("%d", &temp);
    	int q = temp/25;
    	temp %= 25;
    	
    	int d = temp/10;
    	temp %= 10;
    	
    	int n = temp/5;
    	temp %= 5;
    	
    	printf("%d %d %d %d\n", q, d, n, temp);
	}
    return 0;
}
