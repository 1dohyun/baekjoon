#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[9], t[9], u[9];
    scanf("%s %s %s", s, t, u);

    long long nums[3];
    int mod3[3] = {0}, mod5[3] = {0};

    for(int i=0; i<3; i++) {
        char* cur = i==0? s : (i==1?t:u);
        
        if(strcmp(cur, "Fizz")==0) {
            nums[i] = 0; 
            mod3[i] = 1; 
            mod5[i] = 0;
        } else if(strcmp(cur, "Buzz")==0) {
            nums[i] = 0; 
            mod3[i] = 0;
            mod5[i] = 1;
        } else if(strcmp(cur, "FizzBuzz")==0) {
            nums[i] = 0;
            mod3[i] = 1;
            mod5[i] = 1;
        } else 
            nums[i] = atoll(cur);
    }

    long long start;
    
    if(nums[2]>0) 
		start = nums[2]-2;
    else if(nums[1]>0)
		start = nums[1]-1;
    else
		start = nums[0];

    long long next = start + 3;
    
    if(next%15==0)
        puts("FizzBuzz");
    else if(next%3==0)
        puts("Fizz");
    else if(next%5==0)
        puts("Buzz");
    else
        printf("%lld\n", next);

    return 0;
}
