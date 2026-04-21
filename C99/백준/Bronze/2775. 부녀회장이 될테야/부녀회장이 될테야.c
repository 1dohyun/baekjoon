#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int k, n;
        scanf("%d %d", &k, &n);

        int p[15][15] = {0};
        for(int i=1; i<=n; i++)
            p[0][i] = i;

        for(int i=1; i<=k; i++) {
            for(int j=1; j<=n; j++) {
                p[i][j] = p[i][j-1] + p[i-1][j];
            }
        }

        printf("%d\n", p[k][n]);
    }

    return 0;
}
