#include "Dollar.h"
using namespace std;

Dollar operator+ (Dollar& first, Dollar& second) {
	Dollar total (first.getWholeParts(), first.getFractionParts());
	total.add(second.getWholeParts(), second.getFractionParts());
	return total;
}

Dollar operator- (Dollar& first, Dollar& second) {
	Dollar total(first.getWholeParts(), first.getFractionParts());
	total.subtract(second.getWholeParts(), second.getFractionParts());
	return total;
}