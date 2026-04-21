#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    for(int i=0; i<t; i++) {
    	int a, b, c, cnt = 0;
    	scanf("%d %d %d", &a, &b, &c);
    	
    	for(int x=1; x<=a; x++) {
    		for(int y=1; y<=b; y++) {
    			for(int z=1; z<=c; z++) {
    				if(x%y==y%z && y%z==z%x)
    					cnt++;
				}
			}
		}
		
		printf("%d\n", cnt);
	}
	
    return 0;
}
