#include <stdio.h>

int get(int x) {
    int sum = 0;
    while(x>0) {
        sum += x%10;
        x /= 10;
    }
    
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    int m = 0;
    for(int i=n-9*6; i<n; i++) {
        if(i+get(i)==n) {
            m = i;
            break;
        }
    }

    printf("%d\n", m);
    return 0;
}
