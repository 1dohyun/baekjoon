#include <stdio.h>

int main() {
    char isbn[13];
    scanf("%s", isbn);
    
    int sum = 0, mul = 0, index = -1;

    for(int i=0; i<13; i++) {
        if(isbn[i] == '*') {
            index = i;
            mul = (i%2==0) ? 1 : 3;
            continue;
        }
        
        sum += (i%2==0) ? (isbn[i]-'0') : 3*(isbn[i]-'0');
    }

    for(int i=0; i<=9; i++) {
        if((sum+mul*i)%10 == 0) {
            printf("%d", i);
            break;
        }
    }

    return 0;
}
