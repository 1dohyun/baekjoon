#include <stdio.h>

int main() {
    int k, q, r, b, n, p;
    scanf("%d %d %d %d %d %d", &k, &q, &r, &b, &n, &p);
    
    printf("%d ", k==1 ? 0 : -(k-1));
    printf("%d ", q==1 ? 0 : -(q-1));
    printf("%d ", r==2 ? 0 : -(r-2));
	printf("%d ", b==2 ? 0 : -(b-2));
	printf("%d ", n==2 ? 0 : -(n-2));
	printf("%d ", p==8 ? 0 : -(p-8));
	
    return 0;
}
