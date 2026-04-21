#include <stdio.h>

int main() {
	float x, y;
	scanf("%f %f", &x, &y);
	
	while(1) {
		if(x==0 || y==0) {
			puts("AXIS");
			if(x==0 && y==0)
				return 0;
		} else if(x>0) {
			if(y>0)
				puts("Q1");
			else
				puts("Q4");
		} else {
			if(y>0)
				puts("Q2");
			else
				puts("Q3");
		}
		
		scanf("%f %f", &x, &y);
	}
	
	return 0;
}
