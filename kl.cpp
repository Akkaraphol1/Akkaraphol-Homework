#include<iostream>
#include<string>
using namespace std;
int update_balance( string command, float &balance, float dollars)
{
	if(command == "1")
	{
		balance-=dollars;
	}
	else if(command == "2")
	{
		balance+=dollars;
	}
	
	return(balance);
}
int main()
{
	string command;
	float balance=10000,dollars;
	cout<<"Your balance = "<< balance <<endl;

	do{
		cout<<"Input command (1 withdraw, 2 deposit, 0 exit): ";
		cin>>command;
		cout<<"Input amount : ";
		cin>>dollars;
		cout<<"Your balance"<<" "<<update_balance(command, balance, dollars);
		cout<<endl;
		if(command == "0"){
			cout<<"Exit Program.....\n";
		}
	}while(command!="0");
	
	return(0);
}
