#include <stdio.h>

int main() {
	int hl, hh;
	scanf("%d %d", &hl, &hh);
	
	int sl, sh;
	scanf("%d %d", &sl, &sh);
	
	int vl, vh;
	scanf("%d %d", &vl, &vh);
	
	int r, g, b;
	scanf("%d %d %d", &r, &g, &b);
	
	int M = r;
	if(g>M)
		M = g;
	if(b>M)
		M = b;
		
	int m = r;
	if(g<m)
		m = g;
	if(b<m)
		m = b;
	
	int v = M;
	float s = 255.0*(v-m)/v;
	float h;
	
	if(v==r)
		h = 60.0*(g-b)/(v-m);
	else if(v==g)
		h = 120+60.0*(b-r)/(v-m);
	else
		h = 240+60.0*(r-g)/(v-m);
		
	if(h<0)
		h+=360;
	
	if(v>=vl && v<=vh) {
		if(s>=sl && s<=sh) {
			if(h>=hl && h<=hh) {
				puts("Lumi will like it.");
				return 0;
			}
		}
	}
	
	puts("Lumi will not like it.");
    return 0;
}