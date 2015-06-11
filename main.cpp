#include "stdafx.h"
#include <iostream>
#include "Kwiat.h"
#include "Roslina.h"
using namespace std;

int main()
{
	int wysokosc, rosliny;

	Roslina r1(4, "Drzewo");
	rosliny = r1.get_ilosc_roslin();
	wysokosc = r1.get_wysokosc();

	cout << "Wysokosc przed podwyzszeniem: " << wysokosc << endl;
	cout << "Ilosc rosli: " << rosliny << endl;

	r1.rosnij();
	wysokosc = r1.get_wysokosc();
	cout << "Wysokosc po podwyzszeniu: " << wysokosc << endl;

	Kwiat k2(6, 2, "Tulipan");

	cout << "Ilosc roslin na koncu: " << k2.get_ilosc_roslin() << endl;

	k2.set_wysokosc(10);
	wysokosc = k2.get_wysokosc();
	cout << "Wysokosc po uzyciu funkcji set: " << wysokosc << endl;

	return 0;
}
