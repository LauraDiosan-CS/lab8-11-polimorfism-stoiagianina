// Un animal de companie este caracterizat prin cod, nume, preț, data introducerii în magazin, vârstă și număr de exemplare disponibile.
#include <string.h>
#include <iostream>
#include "Magazin.h"

class Animal : public Magazin{
private:
	int varsta;
public:
	Animal();
	Animal(std::string cod, std::string nume, int pret, Data data, int varsta, int nr);
	Animal(const Animal &a);
	~Animal();
	std::string getCod();
	int getPret();
	int getVarsta();
	int getNr();
	std::string getNume();
	Data getData();
	void setCod(std::string c);
	void setPret(int p);
	void setVarsta(int v);
	void setNr(int n);
	void setNume(std::string n);
	void setData(Data d);
};
void teste1();