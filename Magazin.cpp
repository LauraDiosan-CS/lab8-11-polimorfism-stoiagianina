#include "Magazin.h"
#include <assert.h>

Magazin::Magazin() {}
Magazin::~Magazin() {}
Magazin::Magazin(std::string c, std::string n, int p, Data d, int nr)
{
	cod = c;
	nume = n;
	pret = p;
	data = d;
	numar = nr;
}
Magazin::Magazin(const Magazin &m)
{
	cod = m.cod;
	nume = m.nume;
	pret = m.pret;
	data= m.data;
	numar = m.numar;
}
void Magazin::setCod(std:: string c)
{
	cod = c;
}
void Magazin::setNume(std::string n)
{
	nume= n;
}
void Magazin::setPret(int p)
{
	pret = p;
}
void Magazin::setNr(int nr)
{
	numar = nr;
}
void Magazin::setData(Data d)
{
	data = d;
}
std::string Magazin::getCod()
{
	return cod;
}
std::string Magazin::getNume()
{
	return nume;
}
int Magazin::getPret()
{
	return pret;
}
int Magazin::getNr()
{
	return numar;
}
Data Magazin::getData()
{
	return data;
}
