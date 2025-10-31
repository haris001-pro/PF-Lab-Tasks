#include <iostream>
using namespace std;

int main () {
	int num1;
	cout << "Enter the number";
	cin>>num1;
	bool isPrime=true;
	int result =num1/2;
	for (int i=2; i<=result; i++){
		if(num1 % i == 0)
		{
			cout <<"Its not a prime number"<< endl;
			isPrime=false;
			break;
		}
	}
	if(isPrime){
		cout<<num1<<" is a prime number"<<endl;
	}
	return 0;

}
