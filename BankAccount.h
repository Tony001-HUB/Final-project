#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdlib> 
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
	void Interface(); // меню
	void InternetTV(double money);
	void OnlineTransfers();
	void OnlineGame();
	void UtilityPay(double money);
	void SetMoney(double money);// пополнение 
	void OutPut(); // состояние счёта
	void ForEnter(); // для ввода данных
	void ForEnterTwo(double money); // для ввода данных


	enum ConsoleColor {
		Black = 0,
		Blue = 1,
		Green = 2,
		Cyan = 3,
		Red = 4,
		Magenta = 5,
		Brown = 6,
		LightGray = 7,
		DarkGray = 8,
		LightBlue = 9,
		LightGreen = 10,
		LightCyan = 11,
		LightRed = 12,
		LightMagenta = 13,
		Yellow = 14,
		White = 15
	};

	void test();//моя ф-ция для проверки данных(не обращать внимания).
protected:
	//
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	const int NotUsed = system("color 80");
	string accountId;//чар массив логин
	int password[20]; // массив пароль
	//
	double money;
	string currency;
};



