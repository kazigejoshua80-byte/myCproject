#include <stdio.h>
int main(){
	float radius;
	float area;
	float pi = 3.142;
	 printf("A program to calculate the area of a circle\n");
	 printf("Enter the radius of the circle");
	 
	 scanf("%f", &radius);
	 area = pi * radius * radius; 
	 printf("the area of a circle is %.2f", area);
	 
	 
	 return 0;
	
	
	
	
}
