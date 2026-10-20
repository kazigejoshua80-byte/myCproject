#include <stdio.h>
int main(){
	int pin = 2222;
	int enteredpin;
	int choie;
	float balance = 50000; //starting balance 50k UGX
	float amount;
	
	//login 
	printf("=== MOBILE MONEY ===\n");
	printf("Enter pin: ");
	scanf("%d", &enteredpin);
	
	if(enteredpin != pin) {
		printf("wrong pin! Access Denied.");	
	}
	return 0;
}
