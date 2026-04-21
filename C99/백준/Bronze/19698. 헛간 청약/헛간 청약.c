#include <stdio.h>

int main() {
    int n, w, h, l;
    scanf("%d %d %d %d", &n, &w, &h, &l);
	
	int cows = (w/l)*(h/l);
	printf("%d\n", cows>n ? n : cows);
    return 0;
}
