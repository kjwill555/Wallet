#include "Currency.h"
using namespace std;

Currency::Currency() {
	name = "C";
	wholeParts = 0;
	fractionParts = 0;
	fractionName = "fractions";
}

Currency::Currency(string n, int w, int f, string fName) {
	name = n;
	wholeParts = w;
	fractionParts = f;
	fractionName = fName;
}

void Currency::add(int w, int f) {
	wholeParts += w;
	fractionParts += f;
	if (fractionParts >= 100) {
		wholeParts ++;
		fractionParts -= 100;
	}
}

void Currency::subtract(int w, int f) {
	bool wholePartCarried = false;
	wholeParts -= w;
	fractionParts -= f;
	if (fractionParts < 0) {
		wholeParts--;
		fractionParts +=100;
		wholePartCarried = true;
	}
	if (wholeParts < 0 || fractionParts < 0) {
		cout << endl << "Balance went into the negative, reverting back to original value" << endl;
		if (wholePartCarried) {
			fractionParts -= 100;
			wholeParts++;
		}
		fractionParts += f;
		wholeParts += w;
	}
}

ostream& operator<< (ostream& out, Currency& c) {
	out << c.name;
	out << c.wholeParts << ".";
	if (c.fractionParts < 10) {
		out << "0" << c.fractionParts;
	}
	else {
		out << c.fractionParts;
	}
	return out;
}

istream& operator>> (istream& in, Currency& c) {
	cout << "Enter amount to be inputted in normal currency format, i.e. 1.50:";
	string amount;
	in >> amount;
	c.add(stoi(amount.substr(0, amount.find('.'))), stoi(amount.substr(amount.find('.') + 1)));
	return in;
}