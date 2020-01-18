#pragma once
#include <iostream>
#include <string>
using namespace std;

class BankAccount 
{
public:
	BankAccount();
	BankAccount(const string&  _accountId, int _password, int money); // в конструкторе(как бы в системе хранится наши уже зареганные данные)
	~BankAccount();
	void logIn(); // логиним пользователя, проверяем данные с конструктора(нашей системы)
	void choiceCurrency(); // выбор валюты
	void Dollars(); // конвертары(баксы по умолчанию)
	void BYN();
	void UAH();
	void RUB();
	void EUR();
	void test();//моя ф-ция для проверки данных(не обращать внимания).
protected:
	//
    string accountId;//чар массив логин
	int password[20]; // массив пароль
	//
	double money;
	string currency;
};



