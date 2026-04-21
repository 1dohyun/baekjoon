#include <stdio.h>
#include <string.h>

long long cal(int who, const char *owner, const char *mortg, long long cash, int w[10][4], int a, int b) {
    long long total = 0;
    int morg_cnt = 0, col_cnt[10] = {0};

    for(int i=0; i<40; i++) {
        int col_idx = i/4;

        if(owner[i]-'0'==who) {
            col_cnt[col_idx]++;

            if(mortg[i]-'0'==1)
                morg_cnt++;
        }
    }

    for(int i=0; i<10; i++) {
        int cnt = col_cnt[i];

        if(cnt>0)
            total += w[i][cnt-1];
    }

    return total+cash*a/100-(long long)morg_cnt*b;
}

int main() {
    int w[10][4];
    for(int i=0; i<10; i++) {
    	for(int j=0; j<4; j++)
            scanf("%d", &w[i][j]);
	}

    char pre_owner[41], offer[41], morg_stat[41];
    scanf("%s %s %s", pre_owner, offer, morg_stat);

    long long my_cash, opp_cash;
    scanf("%lld %lld", &my_cash, &opp_cash);

    long long my_offer, opp_offer;
    scanf("%lld %lld", &my_offer, &opp_offer);

    int a, b;
    scanf("%d %d", &a, &b);

    long long pre_my_val = cal(1, pre_owner, morg_stat, my_cash, w, a, b);
    long long pre_opp_val = cal(2, pre_owner, morg_stat, opp_cash, w, a, b);

    long long post_my_cash = my_cash-my_offer+opp_offer;
    long long post_opp_cash = opp_cash-opp_offer+my_offer;

    char post_owner[41];
    strcpy(post_owner, pre_owner);

    for(int i=0; i<40; i++)
    {
        if(offer[i]=='1')
            post_owner[i] = '1';
        else {
        	if(offer[i]=='2')
                post_owner[i] = '2';
		}
    }

    long long post_my_val = cal(1, post_owner, morg_stat, post_my_cash, w, a, b);
    long long post_opp_val = cal(2, post_owner, morg_stat, post_opp_cash,w, a, b);

    long long diff_pre = pre_my_val-pre_opp_val;
    long long diff_post = post_my_val-post_opp_val;

    if(diff_post>=diff_pre)
        puts("YES");
    else
        puts("NO");

    return 0;
}
