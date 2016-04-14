#ifndef _EURO_H
#define _EURO_H
#include "Currency.h"
using namespace std;

class Euro : public Currency {
public:
	Euro() :Currency("E", 0, 0, "cents"){};
	Euro(int w, int f) :Currency("E", w, f, "cents"){};
	friend Euro operator+ (Euro&, Euro&);
	friend Euro operator- (Euro&, Euro&);
};
#endif