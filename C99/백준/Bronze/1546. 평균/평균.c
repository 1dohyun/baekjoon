#include <stdio.h>

int main() {
    int n, temp, max = -1e9;
    int scores[1000] = {0,};
    
    float sum = 0.0;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
        scanf("%d", &temp);
        scores[i] = temp;
        
        max = max>temp ? max : temp;
    }
    
    for(int j=0; j<n; j++)
    	sum += (float)scores[j] / max * 100;
    
    printf("%f", sum / n);
    return 0;
}