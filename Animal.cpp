#include "Animal.h"
#include <assert.h>

Animal::Animal():Magazin(){}

Animal::Animal(std::string c, std::string n, int p, Data d, int v, int nr):Magazin(c,n,p,d,nr)
{
	this->varsta = v;
}
Animal::Animal(const Animal &a):Magazin(a)
{
	this->varsta = a.varsta;
}
Animal::~Animal()
{
	this->cod = "";
	this->nume = "";
	this->pret = NULL;
	this->data.getZi = NULL;
	this->data.getLuna = NULL;
	this->data.getAn = NULL;
	this->varsta = NULL;
	this->nr = NULL;

}

int Animal::getVarsta()
{
	return this->varsta;
}
void Animal::setVarsta(int v)
{
	this->varsta = v;
}
void teste1()
{
	Data d1 = Data(12, 3, 2019);
	Data d2 = Data(31, 3, 2020);
	Animal p1 = Animal("1001", "papagal", 300, d1, 5, 10);
	Animal p2 = Animal("1002", "iepure", 250, d2, 3, 25);
	assert(p1.getPret() == 300);
	assert(p2.getNume() == "iepure");
	Data d3 = Data(4, 5, 2020);
	p1.setData(d3);
	assert(p1.getData.getZi() == 4);
	p2.setPret(300);
	assert(p2.getPret() == 300);
	std::cout << "Teste din clasa...\n";
}