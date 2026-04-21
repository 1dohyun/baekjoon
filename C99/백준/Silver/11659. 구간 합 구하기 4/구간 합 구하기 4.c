#include <stdio.h>

long long s[100001];

int main() {
    int n, m, x, y, r;
    scanf("%d %d", &n, &m);
    
    for(int i=1; i<=n; i++) {
        scanf("%d", &r);
        s[i] = s[i-1]+r;
	}	
    
    while(m--) {
        scanf("%d %d", &x, &y);
        printf("%lld\n", s[y]-s[x-1]);
    }
    
    return 0;
}
