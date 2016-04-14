#include "Mark.h"
using namespace std;

Mark operator+ (Mark& first, Mark& second) {
	Mark total(first.getWholeParts(), first.getFractionParts());
	total.add(second.getWholeParts(), second.getFractionParts());
	return total;
}

Mark operator- (Mark& first, Mark& second) {
	Mark total(first.getWholeParts(), first.getFractionParts());
	total.subtract(second.getWholeParts(), second.getFractionParts());
	return total;
}