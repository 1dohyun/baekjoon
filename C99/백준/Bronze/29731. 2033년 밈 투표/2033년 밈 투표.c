#include <stdio.h>
#include <string.h>

int main() {
    const char *original[7] = {
        "Never gonna give you up",
        "Never gonna let you down",
        "Never gonna run around and desert you",
        "Never gonna make you cry",
        "Never gonna say goodbye",
        "Never gonna tell a lie and hurt you",
        "Never gonna stop"
    };

    int n;
    scanf("%d", &n);
    getchar();

    char str[51];
    for(int i=0; i<n; i++) {
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';

        int found = 0;
        for(int j=0; j<7; j++) {
            if(strcmp(str, original[j])==0) {
                found = 1;
                break;
            }
        }

        if(!found) {
            puts("Yes");
            return 0;
        }
    }

    puts("No");
    return 0;
}
