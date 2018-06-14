#ifndef IntCell_H
#define IntCell_H

/*
A class for sumularting an integer memory cell.
*/

class IntCell
{
public:
	explicit IntCell(int initialValue = 0);
	// ~IntCell();
	int read() const;
	void write(int x);

private:
	int storedValue;
};

#endif