#include <iostream>
using namespace std;

void begin();
void listamount();

int main() {
    begin();
    listamount();
    return 0;
}

void begin() {
    string code;
	for(;;){
		cout << "Welcome to MTN Credit Borrow\n";
    	cout << "Dial *506# to access menu: ";
   		cin >> code;
   		
    	if (code == "*506#") {
        	cout << "Menu accessed successfully.\n";
        	break;
       } 
	   else {
        cout << "You entered the wrong code.\n";
    }
}
}

void listamount(){
	cout << "How much do you want to borrow?\n";
	
	for (int num = 1; num <= 8; num++) {
        for (double amount = 10.00; amount >= 1; amount-=10) {
            cout << num << ". GHS " << amount << endl;
            break;
            }
   	}
	}
