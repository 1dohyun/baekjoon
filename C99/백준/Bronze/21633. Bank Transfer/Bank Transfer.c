#include <stdio.h>

int main() {
	long long k;
	scanf("%lld", &k);
	
	double com = 0.01*k+25;
	
	if(com<100)
		com = 100;
	else if(com>2000)
		com = 2000;
	
	printf("%.2lf\n", com);
	return 0;
}
