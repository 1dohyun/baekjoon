#include <stdio.h>

int main() {
    int totalPay, totalCount = 0;
    scanf("%d", &totalPay);
    scanf("%d", &totalCount);
    
    int tempPay, tempCount, tempTotal = 0;
    for(int i = 0; i < totalCount; i++) {
        scanf("%d %d", &tempPay, &tempCount);
        tempTotal += tempPay * tempCount;
    }

		if (tempTotal == totalPay) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}
    return 0;
}