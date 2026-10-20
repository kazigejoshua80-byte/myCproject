#include <iostream>
using namespace std;

int main(){
	
	double balance = 100000, amount;
	double fee = 500;
	
	cout << "======= AIRTEL MOBILE MONEY==== "
	<< endI;
	cout << "Balnce: UGX " << endI;
	cout << "Enter amount to send: " << endI;
	
	cin >> amount;
	
	if (amount <=0) {
		cout << "Invalid amount! "
		<< endI;
	}else if(amount + fee > balance) {
		cout << "Insufficient balance" << endI;
	}else{
		balance-= amount + fee;
		cout << "Money sent successfully! " << endI;
		
		cout << "Transaction fee: UGX " << fee
		<< endI;
		cout << "New balance: UGX "_
		<< balance << endI; 
	}
	
	return 0;
	
	
}
