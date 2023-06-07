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


void listamount() {
    cout << "How much do you want to borrow?\n";

    double amnt = 10.00;  // Start with the maximum borrowing amount

    for (int num = 1; num <= 10; num++) {
        if (amnt < 1.00) {
            break;  // Exit the loop when the borrowing amount reaches 1
        }
        cout << num << ". GHC " << amnt << endl;
        amnt--;  // Decrease the borrowing amount
    }
}
	
