#include <stdio.h>

int main() {
    int basketTotal, putTotal, from, to, num;
    int baskets[100] = {0};

    scanf("%d %d", &basketTotal, &putTotal);
    for(int i = 0; i < putTotal; i++) {
        scanf("%d %d %d", &from, &to, &num);
        for(int n = from; n <= to; n++) baskets[n] = num;
    }
    
    for(int v = 1; v <= basketTotal; v++) printf("%d ", baskets[v]);
    return 0;
}