#include <iostream>
/*#include <stdlib.h>*/
using namespace std;

int option, dataoption, start, end, confirmation;
double loan, amnt, payable, interest,  max_amnt, min_amnt, step, initial, men_step;
string code;
 	
void begin();
void chooseamount();
void amountpayable(double loan);
void menu(double initial, double men_step); 
void menuoption();
void listamount(int start, int end, int max_amnt, int min_amnt, int step);
void listdata();
void data_payable(double bundle, double loan);
void data_option();

int main() {
  	begin();
	menu(8.00, 2.00);
    return 0;
}

void begin() {
	for(;;){
	
    	cout << "Dial *506# to for MTN Extra Time " << endl;
   		cin >> code;
   		
    	if (code == "*506#") {
        	cout << "Welcome to MTN Xtra Time\n";
        	break;
       } 
	   else {
        cout << "You entered the wrong code.\n \n";
    	}
}
}

void menu(double initial, double men_step){
	  cout << endl << "Please select an option: " << endl << endl;
	  cout << "1."<<" GHS" << initial<< endl;
	  cout << "2."<<" GHS" << initial-men_step << endl;
	  cout << "3. More advance options"<< endl;
	  cout << "4. Request a data advance"<< endl;
	  cout << "5. Menu"<< endl;
	  menuoption();
}

void menuoption(){
	cin >> option;
	if (option==1){
		amountpayable(8);	
	}
	else if(option==2){
		amountpayable(6);
	}
	else if(option==3){
		listamount(1,9,8,1,1);
	}
	else if(option==4){
		listdata();
	}
	else if(option==5){
		/*othermenu();*/
	}
}

void listamount(int start, int end, int initial, int min_amnt, int step) {
	cout << "Welcome to MTN Xtra Time" << endl;
   	cout << "Please select an option:" << endl;
	double amnt=initial;
    for (int num = start; num <= end; num++) {
        if (amnt < min_amnt) {
        	break;  // Exit the loop when the borrowing amount reaches 1
        }
        cout << num << ":" << amnt << "GHC" << endl;
        if(amnt==1){
			cout << num+1 << ":" <<amnt-0.5 <<endl;
			break;
		}
		else{
        amnt=amnt-step ; // Decrease the borrowing amount
        }
    }
   	cin >> loan;
   	amountpayable(loan);
}

void listdata(){
	cout << "MTN XtraTime." << endl;
	cout << "Please select an option:" << endl;
	cout << "1: 514 MB" << endl;
	cout << "2: 402 MB" << endl;
	cout << "3: 98 MB" << endl;
	cout << "4: 41 MB" << endl;
	cin >> dataoption;
	data_option();
}

void data_option(){
	if(dataoption==1){
		data_payable(514,5);
	}
	else if(dataoption==2){
		data_payable(402,3);
	}
	else if(dataoption==3){
		data_payable(98,2);
	}
	else if(dataoption==4){
		data_payable(41,1);
	}
	else {
		cout << "You selected a wrong option";
		listdata();
	}
}

void data_payable(double bundle,double loan){
	double interest = loan * 0.1;
	double payable = loan + interest;
	cout << "You have selected " << bundle << " MB" << endl;
	cout << payable << " GHC will be deducted from your next " << endl;
	cout << "airtime reload or MoMo bundle purchase"<<endl;
	cout << "1: Confirm" << endl;
	cout << "2: Cancel" << endl;
	cin >> confirmation;
	if(confirmation==1){
		cout << "You have succefully borrowed " << bundle << "MB" << endl;
	}
	else if(confirmation==2){
		cout << "Canceled";
			break;
	}
	else {
		cout << "Please choose the right option";
		amountpayable(loan);
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
  
void amountpayable(double loan){
	double interest = loan * 0.1;
	double payable = loan + interest;
	cout << "You have selected " << loan << " GHC." << endl;
	cout << payable << " GHC will be deducted from your next " << endl;
	cout << "airtime reload or MoMo bundle purchase "<<endl;
	cout << "1: Confirm " << endl;
	cout << "2: Cancel " << endl;
	cin >> confirmation;
	if(confirmation==1){
		cout << "You have succefully borrowed " << loan << "GHC" << endl;
	}
	else if(confirmation==2){
			break;
	}
	else {
		cout << "Please choose the right option ";
		amountpayable(loan);
	}
}

	
