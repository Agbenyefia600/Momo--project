#include <iostream>
#include <string>

using namespace std;

int main() {
	bool authenticated = false;
	string pin = "0000";
	string password;
	float balance = 1000;
	bool run = true;
	int option;
	while (run) {
		cout << "*****************************" <<endl;
		cout <<"Enter momo pin or 0 to Cancel " <<endl;
		
		for (int x=0; x<3; x++) {
			
			cin >> password;
			
			if (password == pin){
				authenticated=true;
				break;
			} else if (password == "0"){
				run = false;
				break;
			} else {
				if (x == 2){
					run  = false;
					break;
				} else {
					cout << "******************************" <<endl;
					cout <<"Try again or press 0 to exit: " <<endl;
				}
			}
		}
		
		if (authenticated){
			cout << "********************************" << endl;
			cout << "Select optoion" << endl;
			cout << "Meun" << endl;
			cout <<"1. Reset pin" <<endl;
			cout <<"2. Check balance" <<endl;
			cout <<"3. Transfer money" <<endl;
			cout <<"4. Deposit" <<endl;
			cout <<"0. Exit" <<endl;
			cout << "*********************************" << endl;
			cin  >>option;
			if (option==0){
				run = false;
			} else if (option == 1){
				cout << "******************************" << endl;
				cout <<"Enter New Pin" <<endl;
				cin  >>password;
				pin = password;
				cout << "*******************************" << endl;
				cout <<"Your New pin Is: " << pin <<endl;
			}else if (option == 2){
				cout << "*******************************" << endl;
				cout <<"Your Current Balance Is GHS: " << balance <<".00" <<endl;
			}else if (option == 3) {
				string number;
				float amount;
				cout << "*******************************" << endl;
				cout <<"Enter Recipient Number: " <<endl;
				cin  >>number;
				cout << "*******************************" << endl;
				cout <<"Enter Amount " <<endl;
				cin  >>amount;
				if (amount > balance){
					cout << "****************************" << endl;
					cout <<"Not Enough Funds. " <<endl;
				} else {
					balance -= amount;
					cout << "******************************" << endl;
					cout <<"GHS " << amount <<".00 Has been sent to " << number <<endl;
					cout <<"Your Current Balance Is GHS" << balance <<".00" <<endl;
				}
			}else if (option = 4){
				float amount;
				cout <<"******************************" << endl;
				cout <<"Enter Amount: " <<endl;
				cin  >>amount;
				balance += amount;
				cout << "*****************************" << endl;
				cout <<"Transaction Successful " <<endl;
				cout <<"Your New Balance Is GHS" << balance <<".00" << endl;
			}
		}
	}
	return 0;
}