#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int solved = 0;
    
    for(int i=0; i<n; i++){
        char s[101]; 
        scanf("%s", s);
        
        for(int j=0; j<m; j++){
            if(s[j]=='+'){
                solved++;
                break;
            }
        }
    }

    printf("%d\n", solved);
    return 0;
}
