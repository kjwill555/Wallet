#include "Pound.h"
using namespace std;

Pound operator+ (Pound& first, Pound& second) {
	Pound total(first.getWholeParts(), first.getFractionParts());
	total.add(second.getWholeParts(), second.getFractionParts());
	return total;
}

Pound operator- (Pound& first, Pound& second) {
	Pound total(first.getWholeParts(), first.getFractionParts());
	total.subtract(second.getWholeParts(), second.getFractionParts());
	return total;
}