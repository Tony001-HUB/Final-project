
#include "pch.h"
#include "BankAccount.h"
#include <iostream>

int main()
{
	
	setlocale(LC_ALL, "Russian");
	BankAccount person("TonyUser", 12345, 1000);
	cout << endl;
	cout << "Система интернет-банкинг приветсвует вас!" << endl;
	cout << endl;
	person.logIn();
	cout << endl;
	cout << "Пожалуйста, введите валюту" << endl;
	person.choiceCurrency();

}
