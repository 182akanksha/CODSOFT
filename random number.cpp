#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	string name;
	char input;
	int inputuser;
	cout<<"Enter your name";
	getline(cin,name);
	cout<<endl;
	do
	{
		srand(0);
		int variable=rand()%7+2;
		cout<<"Enter any number in between range 2 to 7";
		cin>>inputuser;
		cout<<endl;
		if(inputuser==variable)
		{
			cout<<"Congratulation, you guessed the correct number"<<endl;
			
		}
		else
		{
			cout<<"Sorry, you guessed wrong number try again"<<endl;
		}
		cout<<"Would you like to try again Y/N   ";
		cin>>input;
		cout<<endl;
	}
	while(input!='N');
	cout<<endl;
	
}
