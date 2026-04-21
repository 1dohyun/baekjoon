#include <stdio.h>

int main() {
    int n, m, i, j, temp;
    scanf("%d %d", &n, &m);
    
    int baskets[101] = {0,};
    for(int k=1; k<=n; k++)
        baskets[k] = k;
    
    for(int k=1; k<=m; k++) {
        scanf("%d %d", &i, &j);
        for(int K=0; K<(j-i+1)/2; K++) {
        	temp = baskets[i+K];
        	baskets[i+K] = baskets[j-K];
        	baskets[j-K] = temp;
		}
    }
    
    for(int k=1; k<=n; k++)
        printf("%d ", baskets[k]);
        
    return 0;
}