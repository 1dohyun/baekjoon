#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int min = 200;
    for(int i=0; i<n; i++) {
    	int t, l;
        scanf("%d %d", &t, &l);

        if(t+l<min)
			min = t+l;
    }
    
    printf("%d\n", min);
    return 0;
}
