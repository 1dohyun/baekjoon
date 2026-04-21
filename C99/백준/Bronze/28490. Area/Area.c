#include <stdio.h>

int main() {
    int n, max;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
    	int w, h;
    	scanf("%d %d", &w, &h);
    	
    	if(w*h>max || i==0)
    		max = w*h;
	}
	
	printf("%d\n", max);
    return 0; 
}
