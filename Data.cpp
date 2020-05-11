#include "Data.h"
#include <assert.h>
Data::Data()
{

}
Data::Data(int z, int l, int a)
{
	this->zi = z;
	this->luna = l;
	this->an = a;
}
Data::Data(const Data &d)
{
	this->zi = d.zi;
	this->luna = d.luna;
	this->an = d.an;
}
Data::~Data()
{
	this->zi = NULL;
	this->luna = NULL;
	this->an = NULL;
}

int Data::getZi()
{
	return this->zi;
}
int Data::getLuna()
{
	return this->luna;
}
int Data::getAn()
{
	return this->an;
}

void Data::setZi(int z)
{
	this->zi = z;
}
void Data::setLuna(int l)
{
	this->luna = l;
}
void Data::setAn(int a)
{
	this->an = a;
}