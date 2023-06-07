#include <iostream>
using namespace std;

void begin();
void listamount();
void chooseamount();


int main() {
  	begin();
    listamount();
    void chooseamount();
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

 void chooseamount(){
 	int option;
 	double loan;
 	cin >> option;
 	
 	if (option==1){
 		loan=10.00;
	 }
	else if(option==2){
	 	loan=9;
	 }
	else if(option==3){
	 	loan=8;
	 }
	else if(option==4){
	 	loan=7;
	 }
	else if(option==5){
	 	loan=6;
	 }
	else if(option==6){
	 	loan=5;
	 }
	else if(option==7){
		loan=4;
	 }
	else if(option==8){
		loan=3;
	 }
	else if(option==9){
		loan=2;
	 }
	else if(option==10){
		loan=1;
	 }
	 cout<< "You are borrowing" << loan;
}
 
	
