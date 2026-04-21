#include <stdio.h>

int main() {
    int i, num, cur, max = 0;
    for(i = 0; i < 9; i++) {
        scanf("%d", &num);
        if(max < num) {
            max = num;
            cur = i;
        }
    }
    printf("%d\n%d", max, ++cur);
    
    return 0;
}