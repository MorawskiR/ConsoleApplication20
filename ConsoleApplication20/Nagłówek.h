#pragma once
#include <iostream>
#include <string>
#include <string>
extern char wybor;
extern std::string tablica[5]; // = { "antek", "marian", "zbys", "ponczi" };

const int STKS = 3;
 struct Customer
{
	char fullname[35];
	double payment;
};

class Stack {
private:
	//static int suma;
	//Customer a;
	int index;
public:
	Stack()
	{
		//std::cout << "a";
		index = 2;
	}
	Stack(Customer& c)
	{
		index = c.payment;
		std::cout << c.fullname;
		std::cout << c.payment;
	}
	bool pusty() const;
	bool pelny() const;
	void dodaj(Customer& k) ;
	void usun();
	void display_stack();
};