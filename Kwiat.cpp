#include "stdafx.h"
#include "Kwiat.h"
#include <iostream>
#include <conio.h>
#include <string>

int Kwiat::ilosc_kwiatow = 0;

Kwiat::Kwiat(int il_plat, int wys, string naz)
{
		wysokosc = wys;
		nazwa = naz;
}

void Kwiat::rosnij(int wartosc)
{
	wysokosc = wysokosc + wartosc;
}

int Kwiat::get_wysokosc()
{
	return wysokosc;
}


void Kwiat::set_wysokosc(int h)
{
	wysokosc = h;
}

void Kwiat::set_ilosc_platkow(int il)
{
	ilosc_platkow = il;
}

Kwiat::~Kwiat()
{
  delate: Kwiat;
}
