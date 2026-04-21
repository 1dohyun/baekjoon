#include <stdio.h>
#include <string.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int bullets = 0;
    int save = -1;
    
    for(int i=0; i<n; i++) {
        char str[10];
        scanf("%s", str);
        if(strcmp(str, "save")==0)
            save = bullets;
        else if(strcmp(str, "load")==0)
            bullets = (save == -1 ? 0 : save);
        else if(strcmp(str, "shoot")==0)
            bullets--;
        else if(strcmp(str, "ammo")==0)
            bullets += k;
        
        printf("%d\n", bullets);
    }
    
    return 0;
}
