#include <stdio.h>

int main() {
	int n, p, max = 0;
	scanf("%d %d", &n, &p);
	
	int f[5] = {500, p/10, 2000, p/4};
	
	for(int i=5; i<=20; i+=5) {
		if(n>=i)
			max = max<f[i/5-1] ? f[i/5-1] : max;
	}
	
	if(p-max<0)
		puts("0");
	else
		printf("%d\n", p-max);

    return 0;
}