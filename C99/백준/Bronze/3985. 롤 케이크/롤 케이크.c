#include <stdio.h>

int main() {
    int l, n;
    scanf("%d %d", &l, &n);

    int p[n], k[n];
    for(int i=1; i<=n; i++)
        scanf("%d %d", &p[i], &k[i]);

    int max_fake = 0, fake = 0;
    for(int i=1; i<=n; i++){
        int want = k[i]-p[i]+1;
        
        if(want>max_fake){
            max_fake = want;
            fake = i;
        }
    }
    
    int cake[l+1];
    for(int i=1; i<=l; i++)
		cake[i] = 0;

    for(int i=1; i<=n; i++){
        for(int j=p[i]; j<=k[i]; j++){
            if(cake[j]==0)
                cake[j] = i;
        }
    }

    int cnt[n+1];
    for(int i=1; i<=n; i++) cnt[i] = 0;

    for(int i=1; i<=l; i++){
        if(cake[i]!=0)
            cnt[cake[i]]++;
    }

    int max_real = 0, real = 0;
    for(int i=1; i<=n; i++){
        if(cnt[i]>max_real){
            max_real = cnt[i];
            real = i;
        }
    }

    printf("%d\n%d\n", fake, real);

    return 0;
}
