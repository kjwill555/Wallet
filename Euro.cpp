#include "Euro.h"
using namespace std;

Euro operator+ (Euro& first, Euro& second) {
	Euro total(first.getWholeParts(), first.getFractionParts());
	total.add(second.getWholeParts(), second.getFractionParts());
	return total;
}

Euro operator- (Euro& first, Euro& second) {
	Euro total(first.getWholeParts(), first.getFractionParts());
	total.subtract(second.getWholeParts(), second.getFractionParts());
	return total;
}