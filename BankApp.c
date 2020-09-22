/*
Program:	Bank Account Management Application
Author:		Gabriel, Chan
Date:		July 20, 2018
Purpose:	Keep track of account balance allowing user to deposit,withdraw,accumulate
interest, and show the balance.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Function Declarations
double CompoundInterest(double amount, int months, double annualInterestRate);
double MoneyRound(double amount);

int main(void)
{
	char menuInput = ' ';

	printf("Bank Account Management Application:\n\n");
	printf("Keep track of account balance allowing user to deposit,withdraw,accumulate\n");
	printf("interest, and show the balance.\n");

	while ('q' != menuInput && 'Q' != menuInput)
	{
		printf("\n\n(D)eposit funds into the account\n");
		printf("(W)ithdraw funds from the account\n");
		printf("(A)dd interest\n");
		printf("(S)how the balance\n");
		printf("(Q)uit the application\n");
		printf("\nPlease enter choice=> ");
		fflush(stdin);
		scanf(" %c", &menuInput);
		switch (menuInput)
		{
			case 'D':
			case 'd':
			{
			}
			break;

			case 'W':
			case 'w':
			{
			}
			break;

			case 'A':
			case 'a':
			{

			}
			break;
			case 'S':
			case 's':
			{
			}
			break;
			default:
			{
				printf("\n\nInvalid option, please choose again.\n");
			}
			}
	}
	return 0;
}

//Function Definitions
double CompoundInterest(double amount, int months, double annualInterestRate)
{
	double monthlyInterestRate;
	double compoundInterestRate = 1;
	int count;

	monthlyInterestRate = (annualInterestRate / 1200) + 1;
	for (count = 0; count <months; count++)
	{
		compoundInterestRate *= monthlyInterestRate;
	}
	amount = amount*compoundInterestRate;
	return amount;
}

double MoneyRound(double amount)
{
	int moneyRound;

	moneyRound = (amount * 100) + 0.5;
	amount = (float)moneyRound / 100;
	return amount;
}