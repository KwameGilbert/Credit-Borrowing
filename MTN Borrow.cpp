#include <iostream>
using namespace std;

	int option, start, end, max_amnt, min_amnt, step, initial, men_step;
 	double loan, amnt, payable, interest;
 	string code;
 	
void begin();
int listamount(int start, int end, int max_amnt, int min_amnt, int step);
void chooseamount();
void amountpayable();
int menu(doub  le initial, double men_step); 
int menuoption();

	
 
int main() {
  	begin();
	menu(8.00, 2.00);
	menuoption();
    return 0;
}


	
void begin() {
	for(;;){
	
    	cout << "Dial *506# to for MTN Extra Time ";
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

menu(double initial, double men_step){
	  cout << endl << "Please select an option: " << endl << endl;
	  cout << "1."<<" GHS" << initial<< endl;
	  cout << "2."<<" GHS" << initial-men_step << endl;
	  cout << "3. More advance options"<< endl;
	  cout << "4. Request a data advance"<< endl;
	  cout << "5. Menu"<< endl;
	  
}

menuoption(){
	cin >> option;
	if option==1;
		
}

int listamount() {
    double amnt = max_amnt;  // Start with the maximum borrowing amount
    for (int num = start; num <= end; num++) {
        if (amnt < min_amnt) {
            break;  // Exit the loop when the borrowing amount reaches 1
        }
        cout << num << ". GHC " << amnt << endl << endl;
        amnt-step ; // Decrease the borrowing amount
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

*/
	
