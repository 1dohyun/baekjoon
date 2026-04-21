#include <stdio.h>

int main() {
    int s[9][9];
    for(int i=0; i<9; i++) {
    	for(int j=0; j<9; j++)
    		scanf("%d", &s[j][i]);
	}
    
    int max = -1e9;
    int row, col;
    
    for(int i=0; i<9; i++) {
    	for(int j=0; j<9; j++) {
    		if(max < s[i][j]) {
    			max = s[i][j];
    			row = j;
    			col = i;
			}
		}
	}
	
	printf("%d\n%d %d", max, row+1, col+1);
    return 0;
}
