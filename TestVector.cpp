#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> squares(100);

	for (int i = 0; i < squares.size(); ++i)
	{
		squares[i] = i * i;
	}
	
	for(auto x: squares)
	{
		cout << x << " ";
	}

	for(auto & x: squares)
	{
		++x;
	}

	for(auto x: squares)
	{
		cout << x << " ";
	}

	cout << endl;
	return 0;
}