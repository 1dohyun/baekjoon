#include <stdio.h>

int main() {
    int paper[100][100] = {0};
    int n, x, y, sum = 0;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
    	scanf("%d %d", &x, &y);
    	
    	for(int j=y; j<y+10; j++) {
    		for(int k=x; k<x+10; k++)
    			paper[j][k] = 1;
		}
	}
	
	for(int i=0; i<100; i++) {
		for(int j=0; j<100; j++) {
			if(paper[i][j] == 1)
				sum++;
		}
	}
	
	printf("%d", sum);
    return 0;
}

