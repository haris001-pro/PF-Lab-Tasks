#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string correctpass="Python123";
	string enteredpass;
	bool correct= true;

	while (correct) {
			cout<<"Enter password:";
		    cin>>enteredpass;
		
		if (enteredpass==correctpass)
		{
		cout<< "Access Granted!!!"<<endl;
		correct=true;
		}
		
		else {
		cout<<"Incorrect Password"<< endl;
		}
	}
		return 0;
}


