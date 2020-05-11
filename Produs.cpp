#include "Produs.h"
#include <assert.h>
Produs::Produs():Magazin()
{

}
Produs::Produs(std::string c, std::string n, int p, Data d, Data de, int nr):Magazin(c,n,p,d,nr)
{
	this->data_exp.setZi = de.getZi;
	this->data_exp.setLuna = de.getLuna;
	this->data_exp.setAn = de.getAn;
}
Produs::Produs(const Produs &p):Magazin(p)
{
	this->data_exp = p.data_exp;
}
Produs::~Produs()
{
	this->cod = "";
	this->nume = "";
	this->pret = NULL;
	this->data.getZi = NULL;
	this->data.getLuna = NULL;
	this->data.getAn = NULL;
	this->data_exp.getZi = NULL;
	this->data_exp.getLuna = NULL;
	this->data_exp.getAn = NULL;
	this->nr = NULL;
}
Data Produs::getDataE()
{
	return this->data_exp;
}
void Produs::setDataE(Data de)
{
	this->data_exp = de;
}
void teste2()
{
	Data d1 = Data(12, 3, 2019);
	Data d2 = Data(31, 3, 2020);
	Produs p1 = Produs("10", "mancare pisica", 20, d1, d2, 500);
	Produs p2 = Produs("11", "mancare caine", 30, d1, d2, 300);
	assert(p1.getPret() == 20);
	assert(p2.getNume() == "mancare caine");
	Data d3 = Data(4, 5, 2020);
	p1.setDataE(d3);
	assert(p1.getDataE.getZi() == 4);
	p2.setPret(32);
	assert(p2.getPret() == 32);
	std::cout << "Teste din clasa...\n";
}