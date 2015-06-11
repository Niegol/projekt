#pragma once
#include "Roslina.h"
#include <iostream>
#include <conio.h>
#include <string>

class Kwiat:public Roslina
{
	int ilosc_platkow, wysokosc;
	string nazwa;
	static int ilosc_kwiatow;

public:
	Kwiat(int il_plat=0, int wys=0, string naz="brak");
	~Kwiat();

	void rosnij(int);

	int get_wysokosc();
	int get_ilosc_platokw();

	void set_wysokosc(int);
	void set_ilosc_platkow(int);
};

