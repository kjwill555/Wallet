#include "Franc.h"
using namespace std;

Franc operator+ (Franc& first, Franc& second) {
	Franc total(first.getWholeParts(), first.getFractionParts());
	total.add(second.getWholeParts(), second.getFractionParts());
	return total;
}

Franc operator- (Franc& first, Franc& second) {
	Franc total(first.getWholeParts(), first.getFractionParts());
	total.subtract(second.getWholeParts(), second.getFractionParts());
	return total;
}