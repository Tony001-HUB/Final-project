#pragma once
#include <iostream>
#include <string>
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
	void test();//��� �-��� ��� �������� ������(�� �������� ��������).
protected:
	//
    string accountId;//��� ������ �����
	int password[20]; // ������ ������
	//
	double money;
	string currency;
};



