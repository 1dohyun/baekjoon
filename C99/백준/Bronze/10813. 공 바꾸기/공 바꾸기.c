#include <stdio.h>

int main() {
    int basketTotal, changeTotal, A, B, temp;
	int baskets[100] = {0};
	
	scanf("%d %d", &basketTotal, &changeTotal);
	for(int n = 0; n <= basketTotal; n++) baskets[n] = n;
	
	for(int i = 0; i < changeTotal; i++) {
		scanf("%d %d", &A, &B);
		temp = baskets[A];
		baskets[A] = baskets[B];
		baskets[B] = temp;
	}

    for(int k = 1; k <= basketTotal; k++) printf("%d ", baskets[k]);
    return 0;
}