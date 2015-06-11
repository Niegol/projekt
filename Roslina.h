#pragma once
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Roslina
{
 protected:
	int wysokosc;
	string nazwa;
	static int ilosc_roslin;
 public:
	        
	Roslina(int w=0, string naz="Brak");
	~Roslina();
	void rosnij();

	int get_wysokosc();
	int get_ilosc_lisci();
	int get_ilosc_roslin();

	void set_wysokosc(int);
	void set_ilosc_lisci(int);

};

