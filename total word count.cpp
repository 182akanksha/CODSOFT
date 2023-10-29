#include<iostream>
#include<string>
using namespace std;
int main(){
	char line[60];
	cout<<"Enter a line of text: ";
	cin>>line;
	cin.getline(line,60);
	
	int i,count=1;
	for(i=0; i<=60; i++)//we need to use here
	{
		if(line[i]==' ')//if there is space do the following action
		{
			if(line[i+1] != ' ');//after checking that there is a space the program should skill other space
			{
			    count++;//if the program find no space it should increament count by 1
		    }
		}
	}
	cout<<"\nNumber of words: "<<count;
	
	return 0;
}
