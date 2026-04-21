#include <stdio.h>

int main() {
   	int t;
   	scanf("%d", &t);
   	
   	for(int i=0; i<t; i++) {
   		int x, y;
   		scanf("%d %d", &x, &y);
   		
   		for(int j=0; j<y; j++) {
   			for(int k=0; k<x; k++)
   				printf("X");
   			putchar('\n');
		}
		putchar('\n');
	}
   	
	return 0;
}
