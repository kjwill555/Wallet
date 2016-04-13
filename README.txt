Currency (base class):
  attributes: currency name, whole parts, fraction parts, fraction name
  
  getCurrencyName(): returns the currency name
  getFractionName(): returns the fraction name
  add(int whole, int fraction): adds money
  subtract(int whole, int fraction): subtracts money
  
  overloaded + operator: allows you to add two currency objects, returns a new currency object. can only be done between two objects of the same currency
  overloaded - operator: same as above but subtraction
  overloaded >> operator: not sure yet but you would probably input the number in normal currency format, i.e. 1.50, and the whole and fractional parts would be assigned accordingly
  overloaded << operator: prints the amount in normal currency format, i.e. 1.50

Child classes: Dollar, Pound, Euro, Franc, Mark

child class constructors will just involve passing the value, i.e. Dollar d (1, 50)
there will also be a default constructor with no parameters that initilaizes the value to 0.00
