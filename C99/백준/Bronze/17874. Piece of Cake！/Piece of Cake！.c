#include <stdio.h>

int main() {
	int n, h, v;
	scanf("%d %d %d", &n, &h, &v);
	
	int area = h*v;
	if(h*(n-v)>area)
		area = h*(n-v);
	
	if(v*(n-h)>area)
		area = v*(n-h);
	
	if((n-h)*(n-v)>area)
		area = (n-h)*(n-v);
	
	printf("%d\n", area*4);
	return 0;
}
