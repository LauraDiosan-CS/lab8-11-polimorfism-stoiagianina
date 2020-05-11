#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

template <class T>class Repository{
private:
	vector<T*> elem;
public:
	Repository();
	Repository(const Repository<T> &v);
	~Repository();

	Repository<T>& operator=(const Repository<T> &v);
	Repository<T> get_all();
	int get_size();
	T* get_elem(int i);

	void add_elem(T* el);
	void upd_elem(T* el1, T* el2);
	int find_elem(T* el);
	void del_elem(T* el);
};

template <class T>
Repository<T>::Repository()
{
}

template <class T>
Repository<T>::Repository(const Repository<T> &v)
{
	size = v.size;
	elem = new T[v.size];
	for (int i = 0; i < v.size; i++)
		elem[i] = v.elem[i]->clone();
}

template <class T>
Repository<T>::~Repository()
{
	if (elem)
	{
		delete[] elem;
		elem = NULL;
	}
}

template <class T>
Repository<T>& Repository<T>::operator=(const Repository<T> &v)
{
	if (this != &v)
	{
		size = v.size;
		if (elem)
			delete[] elem;
		elem = new T[v.size];
		for (int i = 0; i < v.size; i++)
			elem[i] = v.elem[i]->clone();
	}
	return *this;
}

template<class T>
Repository<T> Repository<T>::get_all()
{
	return elem;
}

template <class T>
int Repository<T>::get_size()
{
	return elem.size();
}

template <class T>
T* Repository<T>::get_elem(int i)
{
	return elem[i];
}

template<class T>
void Repository<T>::add_elem(T* el)
{
	this->elem.push_back(el->clone());
}

template<class T>
void Repository<T>::upd_elem(T* el1, T* el2)
{
	for (int i = 0; i < this->elem.size(); i++)
	{
		if (*(this->get_elem(i)) == *el1)
		{
			delete this->elem[i];
			this->elem[i] = el2->clone();
			this->saveToFile();
			return;
		}
	}
}
template<class T>
int Repository<T>::find_elem(T* el)
{
	for (int i = 0; i < this->elem.size(); i++)
	{
		if (*(this->get_elem(i)) == *el)
			return i;
	}
	return -1;
}
template<class T>
void Repository<T>::del_elem(T* el)
{
	for (int i = 0; i < this->elem.size(); i++)
	{
		if (**(this->elem.begin() + i) == *el)
		{
			delete this->elem[i];
			this->elem.erase(this->elem.begin() + i);
			return;
		}
	}
}