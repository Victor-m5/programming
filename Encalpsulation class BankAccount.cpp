/*The problem with the given BankAccount class is,the attributes
 accountHolder and balance are public,which means they can be
 accessed and modified directly from outside the class.
 This breaks the principle of encapsulation.*/
/*
AUTHOR:Victor Kinuthia
REG NO:BSE-05-0210/2024
*/
#include<iostream>
#include<string>
using namespace std;
class BankAccount{
	private:
		string accountHolder;
		double balance;
		
		public:
			// setter -accountHolder
			void setaccountHolder(string Holder){
				accountHolder = Holder;
			}
			//getter -accountHolder
			string getaccountHolder(){
				return accountHolder;
			}
			//setter -balance
			void setbalance(int bal){
				balance = bal;
			}
			//getter -balance.
			int getbalance(){
				return balance;
			}
};
int main(){
	BankAccount b1;
	b1.setaccountHolder("VICTOR");
	cout<<"The account holder is:"<<b1.getaccountHolder()<<endl;
	
	b1.setbalance(300000000);
	cout<<"The account balance is:"<<b1.getbalance()<<endl;
	return 0;
}
	



