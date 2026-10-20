#include <stdio.h>
int main() {
int i, j, temp;
int a[5] = {7,3,2,8,1};

for(i=0; i<5-1; i++){
	  for(j=0; j<5-i-1; j++){
	  	if(a[j] > a[j+1]){
	  		temp = a[j];
	  		
	  		a[j] = a[j+1];
	  		a[j+1] = temp;
		  }
	  }
}	
	printf("sorted array\n");
	
	for(i=0; i<5; i++){
		 printf("%d\n", a[i]);
	}
	
	

return 0;
}
