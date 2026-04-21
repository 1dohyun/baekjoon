#include <stdio.h>

int main() {
    int n, ma = 0, mb = 0;
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        if(a>=ma && b>=mb) {
            ma = a;
            mb = b;
        } else {
            puts("no");
            return 0;
        }
    }

    puts("yes");
    return 0;
}
