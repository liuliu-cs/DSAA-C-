#include <iostream>
#include "IntCell.h"

using namespace std;

int main()
{
	IntCell m;
	cout << "Cell content: " << m.read() << endl;

	IntCell o2(12);
	IntCell o3{};
	o3.write(5);
	cout << "Cell content: " << o3.read() << endl;
	// IntCell o3 = 13; incorrect constructor

	return 0;
}