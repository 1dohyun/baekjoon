#include <stdio.h>

int main() {
    int total = 0;
		scanf("%d", &total);

		int tempA, tempB = 0;
		for(int i = 0; i < total; i++) {
				scanf("%d %d", &tempA, &tempB);
				printf("%d\n", tempA + tempB);
		}
    return 0;
}