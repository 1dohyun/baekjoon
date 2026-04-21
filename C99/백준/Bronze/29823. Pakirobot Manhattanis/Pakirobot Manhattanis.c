#include <stdio.h>
#include <math.h>

int main() {
    int n, x = 0, y = 0;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		char c;
		scanf(" %c", &c);
		
		if(c=='N') y++;
		if(c=='S') y--;
		if(c=='E') x++;
		if(c=='W') x--;
	}
	
	printf("%d\n", abs(x)+abs(y));
    return 0;
}
