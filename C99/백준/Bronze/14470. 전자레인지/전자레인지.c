#include <stdio.h>

int main() {
    int a, b, c, d, e, t = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    if(a<0) {
    	t += c*(-a);
    	a = 0;
	}
	
	if(a==0)
		t += d;
	
	t += e*(b-a);

	printf("%d\n", t);
    return 0;
}