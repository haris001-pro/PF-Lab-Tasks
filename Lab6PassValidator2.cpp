#include <iostream>
#include <string>
using namespace std;
int main() 
{
	string pass;
	string correctPass = "Python123";
	
	do {
		cout << "Enter Password:";
		cin>>pass;
	}
	
	while(pass != correctPass);
	
	    cout<< "You entered the wrong password"<< endl;
	 
	 return 0;
}
