#include <stdio.h>
int main() {
float area;
float radius;

const float pi = 3.142;
printf("enter the radius:");
scanf("%f", &radius);
area = pi * radius * radius;
printf("area = %f", area);
return 0;

	
}
