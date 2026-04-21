#include <stdio.h>

int main() {
	int y;
	scanf("%d", &y);
	
	switch(y) {
		case 1995: case 1998: case 1999:
		case 2001: case 2002: case 2003:
		case 2004: case 2005: case 2009:
		case 2010: case 2011: case 2012:
		case 2014: case 2015: case 2016:
		case 2017: case 2019: puts("ITMO"); break;
		
		case 1996: case 1997: case 2000:
		case 2007: case 2008: case 2013:
		case 2018: puts("SPbSU"); break;
		
		case 2006: puts("PetrSU, ITMO"); break;
	} 
	return 0;
}
