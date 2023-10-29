#include<iostream>
using namespace std;

int main()
{
	char op;
	float num1,num2;
	
	
	cout<<"Enter oprator either + or - or * or / :";
	cin>>op;
	cout<<"Enter two oprands:";
	cin>>num1>>num2;
	
	switch(op)
	{
		case'+':
			cout<<num1+num2;
			break;
		case'-':
			cout<<num1-num2;
			break;
		case'*':
			cout<<num1*num2;
			break;
		case'/':
			cout<<num1/num2;
			break;
		default:
//if the opreter is other than=,-,*,/, error msg.is shown
         cout<<"Enter poreter is not crrect";
         break;
         
	}
	return 0;
}
