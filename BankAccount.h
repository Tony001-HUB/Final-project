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
	BankAccount(const string&  _accountId, int _password, int money); // � ������������(��� �� � ������� �������� ���� ��� ���������� ������)
	~BankAccount();
	void logIn(); // ������� ������������, ��������� ������ � ������������(����� �������)
	void choiceCurrency(); // ����� ������
	void Dollars(); // ����������(����� �� ���������)
	void BYN();
	void UAH();
	void RUB();
	void EUR();
	void Interface(); // ����
	void InternetTV(double money);
	void OnlineTransfers();
	void OnlineGame();
	void UtilityPay(double money);
	void SetMoney(double money);// ���������� 
	void OutPut(); // ��������� �����
	void ForEnter(); // ��� ����� ������
	void ForEnterTwo(double money); // ��� ����� ������


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

	void test();//��� �-��� ��� �������� ������(�� �������� ��������).
protected:
	//
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	const int NotUsed = system("color 80");
	string accountId;//��� ������ �����
	int password[20]; // ������ ������
	//
	double money;
	string currency;
};



