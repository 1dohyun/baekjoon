#include <stdio.h>

int main() {
    int n, kg[50], cm[50];
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    	scanf("%d %d", &kg[i], &cm[i]);
    
    for(int i=0; i<n; i++) {
    	int rank = 1;
    	for(int j=0; j<n; j++) {
    		if(i!=j) {
    			if(kg[j]>kg[i] && cm[j]>cm[i])
    				rank++;
			}
		}
		printf("%d ", rank);
	}
    
    return 0;
}
