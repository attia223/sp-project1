#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
struct passenger
{
	string id;
	string password;
} passeng[10];
struct admin {
	string id;
	string password;
}admins;
bool login();
bool admin_login();
char ch;
int main()
{
	int choice = 1;
	passenger id[10];
	cout << "1:admin" << endl;
	cout << "2:passenger" << endl;
	cin >> choice;
	if (choice == 1) {
		admin_login();
	}
	else {
		login();
	}
}

bool login()
{

	passenger user[10];
	int i = 0;
	char ch = 1;
	string pass;
	string id_1;
	user[0].id = "2014111";
	user[0].password = "1234";
	cout << "enter your id" << endl;
	cin >> id_1;
	cout << "enter your password" << endl;
	ch = _getch();
	while (ch != 13)
	{
		pass.push_back(ch);
		cout << "*";
		ch = _getch();

	}
	for (int i = 0; i < 10; i++) {
		if (id_1 == user[i].id && pass == user[i].password) {
			cout << "\n";
			cout << "logged in";
		}
		else {
			cout << "\n";
			cout << "wrong";
		}break;

	}
	return true;
}
bool admin_login()
{
	int i = 0;
	char ch = 1;
	string pass;
	string id_1;
	admin admins[6];
	admins[0].id = "2022170850";
	admins[1].id = "2022170873";
	admins[2].id = "2022170833";
	admins[3].id = "2022170864";
	admins[4].id = "2022170829";
	admins[5].id = "2022170856";

	admins[0].password = "admin";
	admins[1].password = "admin";
	admins[2].password = "admin";
	admins[3].password = "admin";
	admins[4].password = "admin";
	admins[5].password = "admin";
	cout << "enter your id" << endl;
	cin >> id_1;
	cout << "enter your password" << endl;
	ch = _getch();
	while (ch != 13)
	{
		pass.push_back(ch);
		cout << "*";
		ch = _getch();

	}
	for (int i = 0; i < 6; i++) {
		if (id_1 == admins[i].id && pass == admins[i].password) {
			cout << "\n";
			cout << "logged in";
		}
		else {
			cout << "\n";
			cout << "wrong id or password";
		}break;
	}return true;
}