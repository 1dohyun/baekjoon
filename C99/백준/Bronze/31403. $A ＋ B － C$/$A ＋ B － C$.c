#include <stdio.h>

int main() {
	int a, b, c, ab;
	scanf("%d %d %d", &a, &b, &c);
    
    char arr[100];
    sprintf(arr, "%d%d", a, b);
    
    sscanf(arr, "%d", &ab);
    printf("%d\n%d", a+b-c, ab-c);
    return 0;
}
