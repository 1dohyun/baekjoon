#include <stdio.h>

int main() {
	float w, h;
	scanf("%f %f", &w, &h);
	
	float bmi = w/(h*h);
	if(bmi<18.5)
		puts("Underweight");
	else if(bmi<25.0)
		puts("Normal weight");
	else
		puts("Overweight");
	
	return 0;
}
