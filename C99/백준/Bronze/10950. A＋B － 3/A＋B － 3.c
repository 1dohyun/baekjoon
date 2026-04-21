#include <stdio.h>

int main() {
	int total, tmp1, tmp2, i;
    scanf("%d", &total);

	for(i = 0; i < total; i++) {
		scanf("%d %d", &tmp1, &tmp2);
		printf("%d\n", tmp1 + tmp2);
	}
	return 0;
}