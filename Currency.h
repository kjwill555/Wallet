#ifndef _CURRENCY_H
#define _CURRENCY_H
#include <string>
#include <iostream>
using namespace std;

class Currency {
private:
	string name;
	int wholeParts;
	int fractionParts;
	string fractionName;

public:
	Currency();
	Currency(string, int, int, string);
	string getCurrencyName() { return name; }
	string getFractionName() {return fractionName;}
	int getWholeParts() { return wholeParts; }
	int getFractionParts() { return fractionParts; }
	void add(int, int);
	void subtract(int, int);
	friend ostream& operator<< (ostream&, Currency&);
	friend istream& operator>> (istream&, Currency&);
};

#endif