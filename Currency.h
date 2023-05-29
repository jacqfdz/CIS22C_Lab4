#ifndef CURRENCY_H
#define CURRENCY_H

#include <iostream>
#include <string>
#include <cmath>

class Currency
{
protected:
	int whole;
	int frac;

public:
	// Constructers, Copy Constructer, and Destructor:
	Currency();
	Currency(double value);
	Currency(const Currency& origObject);
	virtual ~Currency() {};

	// Setters and Getters:
	/* Returns the whole, frac or name field.
	 * Pre:
	 * Post:
	 * Return: returns whole, frac or name.
	 */
	int getWhole() const { return whole; }
	int getFrac() const { return frac; }
	virtual std::string getName() const = 0;

	void setWhole(int whole);
	void setFrac(int frac);

	// Arithmetic, Comparison, and Other Functions:
	void add(Currency* other);
	void subtract(Currency* other);
	bool isEqual(Currency* other) const;
	bool isGreater(Currency* other) const;
	void print() const;
	std::string toString() const;
};
#endif
