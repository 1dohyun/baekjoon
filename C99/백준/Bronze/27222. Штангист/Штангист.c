#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int tr[1000];
    for(int i=0; i<n; i++)
        scanf("%d", &tr[i]);
    
    int x, y;
    long long total = 0;
    
    for(int i=0; i<n; i++) {
        scanf("%d %d", &x, &y);
        if(tr[i]==1 && y>x)
            total += y-x;
    }
    
    printf("%lld\n", total);
    return 0;
}
