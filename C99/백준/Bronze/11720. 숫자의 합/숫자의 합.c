#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    
    char numbers[100];
    scanf("%s", numbers);
    
    for(int i=0; i<n; i++)
    	sum += numbers[i] - 48;
    
    printf("%d", sum);
    return 0;
}
