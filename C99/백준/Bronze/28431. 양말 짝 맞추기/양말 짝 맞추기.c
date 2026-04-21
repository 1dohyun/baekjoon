#include <stdio.h>

int main() {
    int cnt[10] = {0,};
    for(int i=0; i<5; i++) {
        int x;
        scanf("%d", &x);
        
        cnt[x]++;
    }
    
    for(int i=0; i<10; i++) {
        if(cnt[i]%2==1) {
            printf("%d\n", i);
            break;
        }
    }
    
    return 0;
}
