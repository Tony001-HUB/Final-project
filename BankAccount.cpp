#include "pch.h"
#include "BankAccount.h"


BankAccount::BankAccount()
{
}

BankAccount::BankAccount(const string&  accountId , int _password, int money)
{
	this->accountId = accountId;
	password[20] = _password;
    this->money = money;
	currency = "$";
	test();
}

BankAccount::~BankAccount()
{
}

void BankAccount::logIn()
{		
	string accountId;
	int password;

	cout << "������� �����: " << endl; cin >> accountId;
	cout << "������� ������: " << endl; cin >> password;
	
	if (this->accountId != accountId)
	{
		if (this->password[20] != password)
		{
			cout << "����� ��� ������ ������� �� �����! ";
			exit(0);
		}
	}
	
	if (this->accountId == accountId)
	{
		if (this->password[20] == password)
		{
			cout << "����� ���������� " << this->accountId << "!";
			cout << endl;
		}
	}
}

void BankAccount::choiceCurrency()
{

	int choice;

	cout << "1. Dollars\n";
	cout << "2. BYN\n";
	cout << "3. UAH\n";
	cout << "4. RUB\n";
	cout << "5. EUR\n";
	cout << "Selection pls: ";
	cin >> choice;

	switch (choice) {
	case 1:
		Dollars();
		break;
	case 2:
		BYN();
		break;
	case 3:
		UAH();
		break;
	case 4:
		RUB();
		break;
	default:
		EUR();
		break;
	}

}

void BankAccount::Dollars()
{
	cout << "� ��� ������� " << this->money << " ��������!" << endl;
}

void BankAccount::BYN()
{
	this->money = this->money * 2.125;
	cout << "� ��� ������� " << this->money << " BYN!" << endl;
}

void BankAccount::UAH()
{
	this->money = this->money * 24.3;
	cout << "� ��� ������� " << this->money << " UAH!" << endl;
}

void BankAccount::RUB()
{
	this->money = this->money * 61.5;
	cout << "� ��� ������� " << this->money << " RUB!" << endl;
}

void BankAccount::EUR()
{
	this->money = this->money * 0.898;
	cout << "� ��� ������� " << this->money << " EUR!" << endl;
}

void BankAccount::test()
{
	cout <<"����� "<< accountId << endl;
	cout <<"����� " << password[20] << endl;
	cout <<"(�������) " << money << endl;
	cout << "///////////////////////////" << endl;
	cout << endl;
}
