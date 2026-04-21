#include <stdio.h>

int main() {
	int min, max, first, t, x;
	scanf("%d", &t);
	

	for(int i=0; i<t; i++) {
		scanf("%d", &x);
        
		if(i==0) {
			first = x;
			min = x;
			max = x;
		}
			
		min = min<x ? min : x;
		max = max<x ? x : max;
	}
	
	if(first == min)
		puts("ez");
	else if(first == max)
		puts("hard");
	else
		puts("?");
	
	return 0;
}
