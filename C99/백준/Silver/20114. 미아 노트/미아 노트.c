#include <stdio.h>

int main() {
	int n, h, w;
	scanf("%d %d %d", &n, &h, &w);
	
	char first[n*w];
	for(int i=0; i<n*w; i++)
		first[i] = '?';
	
	char str[h][n*w];
	
	for(int i=0; i<h; i++) {
		for(int j=0; j<n*w; j++) {
			scanf(" %c", &str[i][j]);
			
			if(str[i][j]!='?' && first[j]=='?')
				first[j] = str[i][j];
		}
	}
		
	for(int i=0; i<n; i++) {
    	char c = '?';
    	
    	for(int j=0; j<w; j++) {
        	if(first[i*w+j]!='?') {
            	c = first[i * w + j];
            	break;
        	}
    	}
    	
    	printf("%c", c);
	}
	
	return 0;
}