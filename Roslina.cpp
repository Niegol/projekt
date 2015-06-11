#include "stdafx.h"
#include "Roslina.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int Roslina::ilosc_roslin = 0;

Roslina::Roslina(int w, string naz)
{
	wysokosc = w;
	nazwa = naz;
	++ilosc_roslin;

}

Roslina::~Roslina()
{
--ilosc_roslin;
delate: Roslina;
}

void Roslina::rosnij()
{
	wysokosc = wysokosc + 1;
}

int Roslina::get_ilosc_roslin()
{
	return ilosc_roslin;
}

int Roslina::get_wysokosc()
{
	return wysokosc;
}

void Roslina::set_wysokosc(int h)
{
	wysokosc = h;
}




