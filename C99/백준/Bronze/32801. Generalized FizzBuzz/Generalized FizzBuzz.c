#include <stdio.h>

int main() {
	int n, a, b, fz = 0, bz = 0, fb = 0;
	scanf("%d %d %d", &n, &a, &b);
	
	for(int i=1; i<=n; i++) {
		if(i%a==0 && i%b==0)
			fb++;
		else if(i%a==0)
			fz++;
		else if(i%b==0)
			bz++;
	}
	
	printf("%d %d %d\n", fz, bz, fb);
    return 0;
}
