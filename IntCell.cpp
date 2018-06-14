#include "IntCell.h"

// construct the IntCell with intialValue
IntCell::IntCell(int intialValue) : storedValue{intialValue}
{
}

int IntCell::read() const
{
	return storedValue;
}

void IntCell::write(int x)
{
	storedValue = x;
}