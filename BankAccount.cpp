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

	cout << "Введите логин: " << endl; cin >> accountId;
	cout << "Введите пароль: " << endl; cin >> password;
	
	if (this->accountId != accountId)
	{
		if (this->password[20] != password)
		{
			cout << "Логин или пароль введены не верно! ";
			exit(0);
		}
	}
	
	if (this->accountId == accountId)
	{
		if (this->password[20] == password)
		{
			cout << "Добро пожаловать " << this->accountId << "!";
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
	cout << "У вас насчету " << this->money << " долларов!" << endl;
}

void BankAccount::BYN()
{
	this->money = this->money * 2.125;
	cout << "У вас насчету " << this->money << " BYN!" << endl;
}

void BankAccount::UAH()
{
	this->money = this->money * 24.3;
	cout << "У вас насчету " << this->money << " UAH!" << endl;
}

void BankAccount::RUB()
{
	this->money = this->money * 61.5;
	cout << "У вас насчету " << this->money << " RUB!" << endl;
}

void BankAccount::EUR()
{
	this->money = this->money * 0.898;
	cout << "У вас насчету " << this->money << " EUR!" << endl;
}

void BankAccount::test()
{
	cout <<"логин "<< accountId << endl;
	cout <<"парик " << password[20] << endl;
	cout <<"(баксики) " << money << endl;
	cout << "///////////////////////////" << endl;
	cout << endl;
}
