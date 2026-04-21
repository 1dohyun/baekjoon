#include <stdio.h>

int main() {
	int p1, p2, p3;
	
	scanf("%d %d %d", &p1, &p2, &p3);
	int t1 = p1 + 2*p2 + 3*p3;
	
	scanf("%d %d %d", &p1, &p2, &p3);
	int t2 = p1 + 2*p2 + 3*p3;
	
	if(t1==t2)
		puts("0");
	else if(t1>t2)
		puts("1");
	else
		puts("2");
	
    return 0;
}
