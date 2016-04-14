#ifndef _POUND_H
#define _POUND_H
#include "Currency.h"
using namespace std;

class Pound : public Currency {
public:
	Pound() :Currency("P", 0, 0, "pence"){};
	Pound(int w, int f) :Currency("P", w, f, "pence"){};
	friend Pound operator+ (Pound&, Pound&);
	friend Pound operator- (Pound&, Pound&);
};
#endif