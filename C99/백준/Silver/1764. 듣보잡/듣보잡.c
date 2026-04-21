#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    return strcmp((char *)a, (char *)b);
}

int main() {
    int n, m, cnt = 0;
    scanf("%d %d", &n, &m);

    char pn[n][20];
    for(int i=0; i<n; i++)
        scanf("%s", pn[i]);

    char pm[m][20];
    for(int i=0; i<m; i++)
        scanf("%s", pm[i]);

    char pnm[n > m ? n : m][20];

    if(n > m) {
        qsort(pm, m, sizeof(pm[0]), cmp);
        for(int i=0; i<n; i++) {
            if(bsearch(pn[i], pm, m, sizeof(pm[0]), cmp))
                strcpy(pnm[cnt++], pn[i]);
        }
    } else {
        qsort(pn, n, sizeof(pn[0]), cmp);
        for(int i=0; i<m; i++) {
            if(bsearch(pm[i], pn, n, sizeof(pn[0]), cmp))
                strcpy(pnm[cnt++], pm[i]);
        }
    }

    printf("%d\n", cnt);
    qsort(pnm, cnt, sizeof(pnm[0]), cmp);
    
    for(int i=0; i<cnt; i++)
        printf("%s\n", pnm[i]);

    return 0;
}