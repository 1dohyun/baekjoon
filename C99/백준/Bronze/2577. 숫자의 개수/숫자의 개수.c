#include <stdio.h>

int main() {
    int a, b, c, count = 0;
    scanf("%d %d %d", &a, &b, &c);
    
    char arr[100] = {0};
    sprintf(arr, "%d", a*b*c);
    
    for(int i=0; i<10; i++) {
        count = 0;
        for(int j=0; arr[j]!='\0'; j++) {
            if(arr[j]==i+'0')
                count++;
        }
        printf("%d\n", count);
    }

    return 0;
}
