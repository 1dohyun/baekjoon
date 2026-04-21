#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a-*(int *)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int max = -4001, min = 4001;
    long long sum = 0;

    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        if(arr[i]>max) max = arr[i];
        if(arr[i]<min) min = arr[i];
    }

    qsort(arr, n, sizeof(int), cmp);

    int mode_arr[8001] = {0,};
    int mode_cnt = 0;
    int max_freq = 0;
    int current_freq = 0;

    for(int i=0; i<n; i++) {
        if(i==0 || arr[i]!=arr[i-1])
            current_freq = 1;
        else
            current_freq++;

        if(current_freq>max_freq) {
            max_freq = current_freq;
            mode_cnt = 0;
            mode_arr[mode_cnt++] = arr[i];
        } else if(current_freq==max_freq) {
            if(mode_arr[mode_cnt-1]!=arr[i])
               mode_arr[mode_cnt++] = arr[i];
        }
    }
    
    int mode_val = (mode_cnt>1) ? mode_arr[1] : mode_arr[0];

    printf("%d\n", (int)round((double)sum/n));
    printf("%d\n", arr[n/2]);
    printf("%d\n", mode_val);
    printf("%d\n", max-min);

    return 0;
}