//Un produs pentru animale de companie este carcaterizat prin cod, nume, preț,
//data introducerii în magazin, data expirării și numărul de exemplare disponibile.
#include <string.h>
#include <iostream>

#include"Magazin.h"
#include"Data.h"

class Produs : public Magazin {
private:
	Data data_exp;
public:
	Produs();
	Produs(std::string cod, std::string nume, int pret, Data data, Data data_exp, int cant);
	Produs(const Produs &p);
	~Produs();
	std::string getCod();
	int getPret();
	int getCant();
	std::string getNume();
	Data getData();
	Data getDataE();
	void setCod(std::string c);
	void setPret(int p);
	void setCant(int ct);
	void setNume(std::string n);
	void setData(Data d);
	void setDataE(Data de);
};
void teste2();
