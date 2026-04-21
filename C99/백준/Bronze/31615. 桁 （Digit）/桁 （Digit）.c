#include <stdio.h>
#include <string.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    char arr[5];
    sprintf(arr, "%d", a+b);
    
    printf("%d\n", strlen(arr));
    return 0;
}
