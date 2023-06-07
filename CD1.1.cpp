#include <iostream>
using namespace std;

bool isNumber(string val)
{
	for (int i = 0; i < val.length(); i++)
		if (isdigit(val[i]) == false)
			return false;

	return true;
}


int main()
{
  cout << "Enter Value\n";
	string val;
     cin>>val;

	if (isNumber(val))
		cout << "numeric constant";

	else
		cout << "not numeric";
}
