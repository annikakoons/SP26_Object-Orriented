#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
	string accountHolderName;
	int accountNumber;
	double balance;

public:
	//Constructor to initialize the account details
	BankAccount(string name, int number, double initialBalance)
	{
		accountHolderName = name;
		accountNumber = number;
		balance = initialBalance;
	}

	//Function to deposit money
	void deposit(double amount)
	{
		//Add the 'amount' to the balance
		balance = balance + amount;
		//Update the balance
		cout << "Deposit successfull." << endl;
		cout << "New balance: $" << balance << endl<<endl;
	}

	//Function to withdraw money
	void withdraw(double amount)
	{
		//Check if the 'amount' is less than the balance
		if (amount <= balance)
		{
		//If yes, withdraw the 'amount' and update the balance
			balance = balance - amount;
			cout << "Wathdrawal successful." << endl;
			cout << "New balance: $" << balance<<endl<<endl;
			

		}
		//If no, display an error message
		else
		{
			cout << "Error: Insufficient balance.\n" << endl;
		}
		
	}

	//Function to display the account balance
	void displayBalance()
	{
		//Display the current balance
		cout << "Current balance: $" << balance << endl;
		
	}
};

int main()
{
	string name;
	int number, choice;
	double initialBalance, amount;

	//Create a BankAccount object


	cout << "Enter account holder name: ";
	cin >> name;
	cout << "Enter account number: ";
	cin >> number;
	cout << "Enter account initial balance: ";
	cin >> initialBalance;
	cout << "" << endl << endl;

	do
	{ 
	BankAccount MyAccount(name, number, initialBalance);
	//Prompt the user to perform account operations (deposit, withdraw, display balance)
	cout << "*******Welcome to Assembly Bank*******" << endl;
	cout << "Please choose one of the following operations:" << endl;
	cout << "1. Deposit money to an account" << endl;
	cout << "2. Withdraw money from an account" << endl;
	cout << "3. Display current balance of an account" << endl;
	cout << "4. Exit" << endl << endl;
	cout << "Choice: ";
	cin >> choice;

	//Perform operations and display results
	if (choice == 1)
	{
		cout << "Enter amount to deposit: ";
		cin >> amount;
		MyAccount.deposit(amount);

	}
	else if (choice == 2)
	{
		cout << "Enter amount to withdraw: ";
		cin >> amount;
		MyAccount.withdraw(amount);

	}
	else if (choice == 3)
	{
		MyAccount.displayBalance();
		cout;


	}
	else if (choice == 4)
	{
		cout << "Closing Program.";
	}
	else
	{
		cout << "\nInvalid input. Please select again" << endl;
	}

	} while (choice != 4);

	return 0;
}