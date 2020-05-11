#pragma once
#include "RepoFile.h"

template  <class T> 
class RepoCSV : public RepoFile<T>
{
public:
	RepoCSV();
	~RepoCSV() {}
	RepoCSV(string nume);
	void loadFromFile();
	void saveToFile();
};

template<class T>
inline RepoCSV<T>::RepoCSV() : RepoFile() {}

template<class T>
inline RepoCSV<T>::RepoCSV(string nume):RepoFile<T>(nume) {}

template<class T>
void RepoCSV<T>::loadFromFile()
{
	ifstream f(RepoFile<T>::fis);
	if (f.is_open())
	{
		string line;
		while (getline(f, line)) 
		{
			T* ob(line, ',');
			RepoFile<T>::elem.push_back(ob);
		}
		f.close();
	}
}

template<class T>
void RepoCSV<T>::saveToFile()
{
	ofstream f(RepoFile<T>::fis);
	if (f.is_open())
	{
		for (T* crt : RepoFile<T>::elem)
		{
			f << crt.toStringDelimiter(',') << endl;
		}
	}
}