#include <iostream>
using namespace std;

int main(){
	
	double balance = 100000, amount;
	double fee = 500;
	
	cout << "======= AIRTEL MOBILE MONEY==== "
	<< endl;
	cout << "Balnce: UGX " << endl;
	cout << "Enter amount to send: " << endl;
	
	cin >> amount;
	
	if (amount <=0) {
		cout << "Invalid amount! "
		<< endl;
	}else if(amount + fee > balance) {
		cout << "Insufficient balance" << endl;
	}else{
		balance-= amount + fee;
		cout << "Money sent successfully! " << endl;
		
		cout << "Transaction fee: UGX " << fee
		<< endl;
		cout << "New balance: UGX " << balance << endl;
 
	}
	
	return 0;
	
	
}
