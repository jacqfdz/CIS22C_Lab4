#ifndef KRONE_H
#define KRONE_H

#include <iostream>
#include <string>
#include "Currency.h"

class Krone : public Currency
{
private:
	std::string name;

public:
	Krone() { name = "Krone"; }
	Krone(double value) : Currency(value) { name = "Krone"; }
	Krone(const Currency& origObject) : Currency(origObject) { name = "Krone"; };

	/* This function returns the field name.
	 * Pre:
	 * Post:
	 * Return: returns string of name field.
	 */
	std::string getName() const override { return name; }
};

#endif
