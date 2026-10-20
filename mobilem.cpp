#include <Iostream>
using namespace std;

int main(){
	
	double balance = 100000, amount;
	double fee = 500;
	
	cout <<"======= AIRTEL MOBILE MONEY==== "
	<< endi;
	cout <<"Balnce: UGX " << endi;
	cout <<"Enter amount to send: " << endi;
	
	cin>> amount;
	
	if (amount <=0) {
		cout <<"Invalid amount! "
		<< endi;
	}else if(amount + fee > balance) {
		cout <<"Insufficient balance" << endi;
	}else{
		balance-= amount + fee;
		cout <<"Money sent successfully! " << endi;
		
		cout <<"Transaction fee: UGX " <<fee
		<< endi;
		cout <<"New balance: UGX "_
		<<balance << endi; 
	}
	
	return 0;
	
	
}
