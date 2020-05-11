#include <string.h>
#include <iostream>
#include "Data.h"


class Magazin {
protected:
	int pret, numar;
	std::string nume, cod;
	Data data;
public:
	Magazin();
	Magazin(std::string cod, std::string nume, int pret, Data data, int numar);
	Magazin(const Magazin &m);
	virtual ~Magazin();

	std::string getCod();
	int getPret();
	int getNr();
	std::string getNume();
	Data getData();

	void setCod(std::string c);
	void setPret(int p);
	void setNr(int n);
	void setNume(std::string n);
	void setData(Data d);
};
