#ifndef _FRANC_H
#define _FRANC_H
#include "Currency.h"
using namespace std;

class Franc : public Currency {
public:
	Franc() :Currency("F", 0, 0, "centimes"){};
	Franc(int w, int f) :Currency("F", w, f, "centimes"){};
	friend Franc operator+ (Franc&, Franc&);
	friend Franc operator- (Franc&, Franc&);
};
#endif