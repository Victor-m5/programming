#include<iostream>
#include<string>
using namespace std;

int main(){
	//Inputs
	string bookID;
	int dueDate,returnDate;
	
	//prompt for user inputs
	cout<<"Enter the book ID:";
	cin>> bookID;
	
	cout<<"Enter the due Date (as an integer day):";
	cin>>dueDate;
	
	cout<<"Enter the Return Date(as an integer day):";
	cin>>returnDate;
	
	//Calculate the number of overdue days
	int daysOverdue = returnDate - dueDate;
	
	//Initialize fine rate and fine amount
	int fineRate = 0;
	int fineAmount = 0;
	
	//Determine fine rate based on days overdue
	if(daysOverdue > 0){
		if(daysOverdue <= 7){
			fineRate = 20;// Ksh 20 per day
		}else if (daysOverdue <= 14){
			fineRate = 50;//Ksh 50 per day
		}else{
			fineRate = 100;//Ksh 100 per day
		}
		fineAmount = fineRate * daysOverdue;
	}
	//Display the results
	cout<<"\nBook Details and Fine Information:\n";
	cout<<"Book ID:"<<bookID << endl;
	cout<<"Due Date:"<<dueDate << endl;
	cout<<"Return Date:"<<returnDate <<endl;
	cout<<"Days Overdue:"<<(daysOverdue> 0 ? daysOverdue : 0)<< endl;
	cout<<"Fine Rate:Ksh"<< fineRate << endl;
	cout<<"Fine Amount:Ksh"<<fineAmount << endl;
	
	return 0;
}
