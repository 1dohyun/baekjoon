#include <stdio.h>

int main() {
	int a[1000], cnt = 0, n;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		int tmp;
		scanf("%d", &tmp);
		
		a[i] = tmp;
	}
	
	for(int i=0; i<n; i++) {
		int tmp;
		scanf("%d", &tmp);
		
		if(tmp>=a[i])
			cnt++;
	}
	
	printf("%d\n", cnt);
    return 0;
}
