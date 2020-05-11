#include <string.h>
#include <iostream>

class Data {
private:
	int zi, luna, an;
public:
	Data();
	Data(int zi, int luna, int an);
	Data(const Data &d);
	~Data();
	int getZi();
	int getLuna();
	int getAn();
	void setZi(int z);
	void setLuna(int l);
	void setAn(int a);
};
