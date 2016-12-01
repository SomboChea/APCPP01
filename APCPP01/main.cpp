#include <iostream>
#include "Employee.h";

using namespace std;

void main(){

	int n;
	cout << "Enter number of Employee : "; cin >> n;
	Employee emp[100];
	string name;
	double pay;
	for (int i = 0;i < n;i++) {
		cout << "Enter emp[" << i << "] Name : "; cin >> name;
		emp[i].setName(name);
		cout << "Enter emp[" << i << "] Pay : "; cin >> pay;
		emp[i].setPay(pay);
	}

	cout << "\n--------------Employees-------------" << endl;

	for (int i = 0;i < n;i++) {
		cout << "Name : " << emp[i].getName() << endl;
		cout << "Pay : " << emp[i].getPay() << endl;
		cout << "Gross Pay : " << emp[i].grossPay(30) << endl;
	}
	
	cout << "\n-----------------------------------------" << endl;

	cout << "Enter number of Manager : "; cin >> n;
	Manager::Employee mgr[100];
	for (int i = 0;i < n;i++) {
		cout << "Enter mgr[" << i << "] Name : ";cin >> name;
		mgr[i].setName(name);
		cout << "Enter mgr[" << i << "] Pay : ";cin >> pay;
		mgr[i].setPay(pay);
	}

	cout << "\n-------------Managers-------------" << endl;

	for (int i = 0;i < n;i++) {
		cout << "Name : " << mgr[i].getName() << endl;
		cout << "Pay : " << mgr[i].getPay() << endl;
		cout << "Gross Pay : " << mgr[i].grossPay(0) << endl;
	}

	cout << "\n-----------------------------------------" << endl;

}