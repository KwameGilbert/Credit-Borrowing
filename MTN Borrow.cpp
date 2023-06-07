#include <iostream>
using namespace std;

void begin();
void listamount();
void chooseamount();
void amountpayable();

	int option;
 	double loan;
 	string code;
 	double amnt;
 	double payable;
 	double interest;

int main() {

  	begin();
    listamount();
    chooseamount();
    amountpayable();
    return 0;
}


	
void begin() {
	for(;;){
		cout << "Welcome to MTN Credit Borrow\n";
    	cout << "Dial *506# to access menu: ";
   		cin >> code;
   		
    	if (code == "*506#") {
        	cout << "Menu accessed successfully.\n";
        	break;
       } 
	   else {
        cout << "You entered the wrong code.\n \n";
    }
}
}


void listamount() {
    cout << endl << "How much do you want to borrow?" << endl << endl;
	
    double amnt = 10.00;  // Start with the maximum borrowing amount

    for (int num = 1; num <= 10; num++) {
        if (amnt < 1.00) {
            break;  // Exit the loop when the borrowing amount reaches 1
        }
        cout << num << ". GHC " << amnt << endl << endl;
        amnt--;  // Decrease the borrowing amount
    }
    
}

void chooseamount(){
 
 	cin >> option;
 	
 	if (option==1){
 		loan=10.00;
	 }
	else if(option==2){
	 	loan=9.00;
	 }
	else if(option==3){
	 	loan=8.00;
	 }
	else if(option==4){
	 	loan=7.00;
	 }
	else if(option==5){
	 	loan=6.00;
	 }
	else if(option==6){
	 	loan=5.00;
	 }
	else if(option==7){
		loan=4.00;
	 }
	else if(option==8){
		loan=3.00;
	 }
	else if(option==9){
		loan=2.00;
	 }
	else if(option==10){
		loan=1.00;
	 }
	 cout<< endl << "You are borrowing GHS " << loan << endl << endl;
}

void amountpayable(){
	double interest = loan * 0.1;
	double payable = loan + interest;
	cout << "You will pay GHS " << payable ;
}

	
