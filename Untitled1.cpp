#include <iostream>
using namespace std;
//This program will calculate the area of diff shapes
//Declaring constants globally
    int pi=3.14;
int main () {
	int a;
	    cout<< "1-circle"<< endl << "2-Rectangle"<< endl << "3-Triangle"<< endl;
	    cout << "4-Quit"<< endl;
	    cout<< "Choose the desired Shape"<< endl;
	    cin>> a;
		    float r;
		    float l;
			float b;
			float ba;
		    float h;
	switch (a) {
	    case 1: cout << "Enter Radius of circle";
		        cin>>r;
	            cout << "Area="<< pi*r*r << endl;
	        break;        
	    case 2: cout << "Enter the Length";
		        cin >> l;
		        cout << "Enter the breadth";
		        cin >> b;
		        cout << "Area="<< l*b << endl;
		    break;
		case 3: cout << "Enter the base";
		        cin >> ba;
		        cout << "Enter the height";
		        cin >> h;
	            cout << "Area=" << 0.5*ba*h << endl;
		    break;     
		case 4: cout << "Exiting Program"<< endl;
		    break;
		default:
		       cout<< "Invalid Input"<< endl;
		    break;	
	}
	
}
