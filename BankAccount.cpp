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
			cout << "Логин или пароль введены не верно! ";
			exit(0);
	}
	if (this->password[20] != password)
	{
		cout << "Логин или пароль введены не верно! ";
		exit(0);
	}
			cout << "Добро пожаловать " << this->accountId << "!";
			cout << endl;
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

	if (cin.get() == (int) '\n')
	{
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
	else
	{
		cout << "Error" << endl;
		abort();
	}
}

void BankAccount::Dollars()
{
	this->currency = " $";
	cout << "У вас на счету " << this->money << currency << endl;

	Interface();
}

void BankAccount::BYN()
{
	this->currency = " BYN!";
	this->money = this->money * 2.125;
	cout << "У вас на счету " << this->money << this->currency << endl;

	Interface();
}

void BankAccount::UAH()
{
	this->currency = " UAH!";
	this->money = this->money * 24.32;
	cout << "У вас на счету " << this->money << this->currency << endl;

	Interface();
}

void BankAccount::RUB()
{
	this->currency = " RUB!";
	this->money = this->money * 61.52;
	cout << "У вас на счету " << this->money << this->currency << endl;

	Interface();
}

void BankAccount::EUR()
{
	this->currency = " EUR!";
	this->money = this->money * 0.898;
	cout << "У вас на счету " << this->money << this->currency << endl;

	Interface();
}


void BankAccount::Interface()
{
	int choice;
	
	SetConsoleTextAttribute(hConsole, (WORD)((DarkGray << 4) | Green));
	cout << "       ********************************************************          " << endl;
	SetConsoleTextAttribute(hConsole, (WORD)((DarkGray << 4) | Green));
	SetConsoleTextAttribute(hConsole, (WORD)((DarkGray << 4) | Yellow));
	cout <<"         Вы попали в главное меню, выберите услугу, пожалуйста          "<<endl;
	SetConsoleTextAttribute(hConsole, (WORD)((DarkGray << 4) | Red));
	cout << "        1.Интернет-телевидение  " "  2.Онлайн-переводы"; // Онлайн-переводы будет сделаны позже(например переводна счет другого пользователя, друзей, пока их нет :D МЫ ОДИНОКИ!((
	cout << endl;
	cout << endl;
	cout << "        3.Онлайн-игры  " "           4.Коммунальные платежи";
	cout << endl;
	cout << endl;
	cout << "        5.Пополнить счет " "         6.Остаток на счете";
	cout << endl;
	cout << endl;
	cout << "                    7.Выйти из системы              ";
	cout << endl;
	SetConsoleTextAttribute(hConsole, (WORD)((DarkGray << 4) | Green));
	cout << "       ********************************************************           " << endl;

	cin >> choice;
	if (cin.get() == (int) '\n')
	{
		switch (choice) {
		case 1:
			InternetTV(money);
			break;
		case 2:
			OnlineTransfers();
			break;
		case 3:
			OnlineGame();
			break;
		case 4:
			UtilityPay(money);
			break;
		case 5:
			SetMoney(money);
			break;
		case 6:
			OutPut();
		case 7:
			break;
		default:
			cout << "Введено некорректное значение! Пожалуйста, повторите ввод" << endl;

			Interface();
			break;
		}
	}
	else // во избежании бесконечного цикла :)
	{
		cout << "Error" << endl;
		abort();
	}
	
	
}


void BankAccount::OnlineTransfers() // нужны друзья(((((
{

	cout << "Нужны друзья, не заходите сюда:D\n";
	Interface();

}

void BankAccount::OnlineGame()// так же можно будет синхронизировать игровые аккаунты друзей :) пока что демо-версия.
{
	int choice;
	SetConsoleTextAttribute(hConsole, (WORD)((DarkGray << 4) | Red));
	cout << "1. World of Tanks\n";
	cout << "2. Наследие Древних\n";
	cout << "3. Clash of Empire\n";
	cout << "4. RAID\n";
	cout << "5. World of Warcraft\n";
	cout << "6. StarCraft II\n";
	cout << "7. War Thunder\n";
	cout << "8. Вернуться в главное меню\n";
	cout << "Сделайте выбор, пожалуйства: ";
	cin >> choice;
	
	if (cin.get() == (int) '\n')
	{
		switch (choice) {
		case 1:
			ForEnterTwo(money);
			break;
		case 2:
			ForEnterTwo(money);
			break;
		case 3:
			ForEnterTwo(money);
			break;
		case 4:
			ForEnterTwo(money);
			break;
		case 5:
			ForEnterTwo(money);
			break;
		case 6:
			ForEnterTwo(money);
			break;
		case 7:
			ForEnterTwo(money);
			break;
		case 8:
			Interface();
			break;
	
		default:
			cout << "Введено некорректное значение! Пожалуйста, повторите ввод" << endl;

			OnlineGame();
			break;
		}
	}
	else
	{
		cout << "Error" << endl;
		abort();
	}
}

void BankAccount::UtilityPay(double money)
{
	
	SetConsoleTextAttribute(hConsole, (WORD)((DarkGray << 4) | Red));
	cout << "Введите номер ЕРИП:" << endl;
	string x; cin >> x;

	SetConsoleTextAttribute(hConsole, (WORD)((DarkGray << 4) | Red));
	cout << "Введите сумму пополнения в:" << this->currency << endl;
	do
	{
		if (this->money < money) cout << "У вас недостаточно средств!!! Запросите меньшую сумму." << endl;
		cin >> money;
	} while (this->money < money);
	this->money -= money;
	cout << "Операция успешно совершна!!!" << endl;
	cout << endl;
	OutPut();

}

void BankAccount::SetMoney(double money)
{
	SetConsoleTextAttribute(hConsole, (WORD)((DarkGray << 4) | Red));
	cout << "Введите сумму пополнения в:" << this->currency << endl;
	cin >> money;
	this->money += money;
	cout << endl;
	OutPut();
}

void BankAccount::InternetTV(double money)
{
	ForEnter();

	SetConsoleTextAttribute(hConsole, (WORD)((DarkGray << 4) | Red));
	cout << "Введите сумму пополнения в:" << this->currency << endl;

	do
	{
		if (this->money < money) cout << "У вас недостаточно средств!!! Запросите меньшую сумму." << endl;
		cin >> money;
	} while (this->money < money);
	this->money -= money;
	cout << "Операция успешно совершна!!!" << endl;
	cout << endl;
	OutPut();


}

void BankAccount::OutPut()
{


	cout << endl;
	SetConsoleTextAttribute(hConsole, (WORD)((DarkGray << 4) | LightGreen));
	cout << "Номер счета: " << accountId << endl;
	cout << "Валюта: " << currency << endl;
	cout << "Остаток средств на счёте: " << this->money << endl;

	int choice;

	SetConsoleTextAttribute(hConsole, (WORD)((DarkGray << 4) | Yellow));
	cout << endl;
	cout << "         Вернуться в главное меню ?          " << endl;
	SetConsoleTextAttribute(hConsole, (WORD)((DarkGray << 4) | Red));
	cout << endl;
	cout << "         1.Да  " "  2.Завершить сеанc";
	cout << endl;

	cin >> choice;	
	if (cin.get() == (int) '\n')
	{
		switch (choice) {
		case 1:
			Interface();
			break;
		case 2:
			
			break;
		default:
			cout << "Введено некорректное значение! Пожалуйста, повторите ввод" << endl;
			break;
		}
	}
	else 
	{
		cout << "Error" << endl;
		abort();
	}

}

void BankAccount::ForEnter()
{
	string log; string pas;
	cout << "Введите номер телефона: " << endl; cin >> log;
	cout << "Введите ваш Интернет-провайдер: " << endl; cin >> pas;
}

void BankAccount::ForEnterTwo(double money)
{

	string log; string pas;
	cout << "Введите игровой логин: " << endl; cin >> log;
	cout << "Введите игровой пароль: " << endl; cin >> pas;
	cout <<endl;
	cout << "************" << endl;
	cout << "Успешний вход в аккаунт!!!" << endl;
	cout << "************" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, (WORD)((DarkGray << 4) | Red));
	cout << "Введите сумму пополнения в:" << this->currency << endl;

	do
	{
		if (this->money < money) cout << "У вас недостаточно средств!!! Запросите меньшую сумму." << endl;
		cin >> money;
	} while (this->money < money);
	this->money -= money;
	cout << "Операция успешно совершна!!!" << endl;
	cout << endl;
	OutPut();

}

void BankAccount::test()
{
	cout <<"логин "<< accountId << endl;
	cout <<"парик " << password[20] << endl;
	cout <<"(баксики) " << money << endl;
	cout << "///////////////////////////" << endl;
	cout << endl;
}
