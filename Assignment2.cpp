
#include <iostream>
#include <string> 
#include <conio.h>
using namespace std;

int i;
int number[10];
int currentplace = 0, insertedvalue = 0;
string Name[10];
string EmployeeID[10];
string PhoneNumber[10];
string Department[10];
string Position[10];

struct EmployeeInfo
{
	string name;
	string EmployeeId;
	string PhoneNumber;
	string Department;
	string Position;
};
const int num = 10; //0-9
EmployeeInfo emp[num];

#pragma region RegisterFunction
void RegisterFunction()
{
	cout << "														" << endl;
	cout << "=====================Register Page=====================" << endl;
	cout << "Please Insert Employee's Details without SPACE and Followed by Enter" << endl;
	cout << "Name:";
	//cin >> Name[currentplace];
	//cout << "EmployeeID:";
	//cin >> EmployeeID[currentplace];
	//cout << "PhoneNumber:";
	//cin >> PhoneNumber[currentplace];
	//cout << "Department:";
	//cin >> Department[currentplace];
	//cout << "Position:";
	//cin >> Position[currentplace];
	cin.ignore();
	getline(cin,emp[1].name);
	cin.sync();
	cout << "EmployeeID:";
	getline(cin, emp[1].EmployeeId);
	cin.sync();
	cout << "PhoneNumber:";
	getline(cin, emp[1].PhoneNumber);
	cin.sync();
	cout << "Department:";
	getline(cin>>ws, emp[1].Department);
	cin.sync();
	cout << "Position:";
	getline(cin>>ws, emp[1].Position);
	cin.sync();
	//cin >> emp[1].Position;
	currentplace++;
	insertedvalue = 0;
}
#pragma endregion


#pragma region ViewFunction
void ViewFunction() {
	cout << "														" << endl;
	cout << "=======================View Page=======================" << endl;
	cout.setf(ios::left);
	cout.width(5);
	cout << "No";
	cout.width(25);
	cout << "Name";
	cout.width(20);
	cout << "EmployeeID";
	cout.width(20);
	cout << "Phone Number";
	cout.width(20);
	cout << "Department";
	cout.width(10);
	cout << "Position" << endl;
	cout.unsetf(ios::left);

	for (i = 0; i < currentplace; i++) {
		cout.setf(ios::left);
		cout.width(5);
		cout << currentplace+1;
		cout.width(25);
		cout << emp[1].name;
		cout.width(20);
		cout << emp[1].EmployeeId;
		cout.width(20);
		cout << emp[1].PhoneNumber;
		cout.width(20);
		cout << emp[1].Department;
		cout.width(10);
		cout << emp[1].Position << endl;
		cout.unsetf(ios::left);

	}
	insertedvalue = 0;

}
#pragma endregion


#pragma region EditFunction
void EditFunction() {
	cout << "============Edit Page============" << endl;
}
#pragma endregion


#pragma region DeleteFunction
void DeleteFunction() {
	cout << "============Delete Page============" << endl;
}
#pragma endregion

#pragma region  Exit
void ExitProgram() {
	int input = false;  
	cout << "Do you sure want to exit?" << endl;
	cout << "Yes--> 1" << endl;
	cout << "No --> 0" << endl;
	cin >> input;
	if (input == 1)
	{
		cout << "===================System Terminated===================" << endl;
		exit(1);
	}
	else
		insertedvalue = 0;

}
#pragma endregion


int main()
{


		while (insertedvalue != 5 )
		{
			cout << "														" << endl;
			cout << "==============Employee Management System===============" << endl;
			cout << "Please Insert Number and Followed by Enter" << endl;
			cout << "1. Register" << endl;
			cout << "2. View" << endl;
			cout << "3. Edit" << endl;
			cout << "4. Delete" << endl;
			cout << "5. Exit" << endl;
			cout << "Enter the choice:";
			cin >> insertedvalue;

			if (insertedvalue == 1)
				RegisterFunction();

			else if (insertedvalue == 2)
				ViewFunction();

			else if (insertedvalue == 3)
				EditFunction();

			else if (insertedvalue == 4)
				DeleteFunction();

			else if (insertedvalue == 5)
				ExitProgram();

			//else if (insertedvalue == 0)
			//	mainpageinitialize();

			else
				cout << "Please Insert the Valid Number";

		}
}


