#include <stdio.h>

int main() {
	int n, a4 = 0;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		int tmp;
		scanf("%d", &tmp);
		
		if(tmp%2==0)
			a4 += tmp;
		else
			a4 += tmp+1;
	}
	
	printf("%d\n", a4/2);
    return 0;
}
