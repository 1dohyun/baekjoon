#include <stdio.h>

int main() {
	int t, sc[5] = {0,};
	scanf("%d", &t);
	
	for(int i=0; i<t; i++)
		scanf("%d", &sc[i]);
	
	long long num = 0;
	if(sc[0]>sc[2])
		num += (sc[0]-sc[2])*508;
	else
		num += (sc[2]-sc[0])*108;
	
	if(sc[1]>sc[3])
		num += (sc[1]-sc[3])*212;
	else
		num += (sc[3]-sc[1])*305;
	
	if(sc[4]!=0)
		num += sc[4]*707;
	
	printf("%lld\n", num*4763);
    return 0;
}
