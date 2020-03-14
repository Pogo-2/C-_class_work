#include <iostream>
#include <string>
using namespace std;

int main() {

	int attempt = 0;
	string password;

	do{
		if (attempt > 0) {
				cout << "wrong password\n";
			}
		cout << "Password : ";
		cin >> password;
		attempt++;
	}while(password != "password");

	cout << "correct password";

	return 0;
}