#ifndef _MARK_H
#define _MARK_H
#include "Currency.h"
using namespace std;

class Mark : public Currency {
public:
	Mark() :Currency("DM", 0, 0, "pfennigs"){};
	Mark(int w, int f) :Currency("DM", w, f, "pfennigs"){};
	friend Mark operator+ (Mark&, Mark&);
	friend Mark operator- (Mark&, Mark&);
};
#endif