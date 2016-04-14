#ifndef _DOLLAR_H
#define _DOLLAR_H
#include "Currency.h"
using namespace std;

class Dollar : public Currency {
public:
	Dollar() :Currency("$", 0, 0, "cents"){};
	Dollar(int w, int f) :Currency("$", w, f, "cents"){};
	friend Dollar operator+ (Dollar&, Dollar&);
	friend Dollar operator- (Dollar&, Dollar&);
};
#endif