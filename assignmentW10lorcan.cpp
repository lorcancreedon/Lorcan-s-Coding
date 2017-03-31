// assignmentW10lorcan.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getMonth();
int getDay(int month);
int getYear();
double getBalance();
void printCustomer(struct customer customerX);

struct date
{
	int day, month, year;
};
struct customer
{
	char name[50]; // string containing the full name (first name and surname)
	int accountNumber; // account number, starting at 10000
	double balance; // current balance
	struct date lastTrans; // date of last transaction
};



int main()
{
	char names[10][50] = { "Lilyana Whitehead", "Kelsey Ashley", "Olive Conway", "Nora Barker", "Laylah Patel", "Royce Mitchell", "Haven Macias", "Edgar Schmidt", "Joanna Kramer", "Aydan Oneal" };
	struct customer customers[10];
	int accountNum = 10000; 
	
	printf("Name     Account Number     Balance    Date of last transaction \n");

	for (int i = 0; i < 10; i++) {
		int month = getMonth();


		customers[i].lastTrans.month = month;
		customers[i].lastTrans.day = getDay(month);
		customers[i].lastTrans.year = getYear();
		customers[i].accountNumber = accountNum;
		customers[i].balance = getBalance();
		customers[i].name = names[i];//expression must be modifiable lvalue
		
		printCustomer(customers[i]);
		
		accountNum++;
	}


	


}

int getMonth() {

	int randNum = rand() % 12 + 1;
	
	return randNum;
}

int getDay(int month) {
	
	int randNum;
	switch (month){

		case 1: //january 
			int randNum = rand() % 31 + 1;
			break;

		case 2: //febuary
			randNum = rand()%29 + 1;
			break;

		case 3: //march
			randNum = rand()%31 + 1;
			break;

		case  4: //april
			randNum = rand()%30 + 1;
			break;

		case 5: //may
			randNum = rand()%31 + 1;
			break;

		case 6: //june
			randNum = rand()%30 + 1;
			break;

		case 7: //july
			randNum = rand()%31 + 1;
			break;

		case 8: //august
			randNum = rand()%31 + 1;
			break;

		case 9: //september
			randNum = rand()%30 + 1;
			break;

		case 10: //october
			randNum = rand()%31 + 1;
			break;

		case 11: //november
			randNum = rand()%30 + 1;
			break;

		case 12: //december
			randNum = rand()%31 + 1;
			break;
	}


	return randNum;
}

int getYear() {

	int randNum = rand() % 2016 + 2014; 

	return randNum;

}

double getBalance() {

	double randNum = rand() % 1000000 + 0;

	return randNum;
}

void printCustomer( customer customerX) {

	
	printf(	"%s     ", customerX.name,
			"%d     ", customerX.accountNumber,
			"%d     ", customerX.balance,
			"%d     ", customerX.lastTrans.day,
			"/%d     ", customerX.lastTrans.month,
			"/%d     \n", customerX.lastTrans.year
	);



	
}















