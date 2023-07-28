#include <iostream>
using namespace std;

void isOperator(string val)
{
	string arr="+-*/%=";

	for (int i = 0; i < arr.length(); i++)
		{
		for (int j = 0; j < val.length(); j++)
		if (arr[i]==val[j])
            {
            cout << "\nOperator: "<< arr[i];
            }

		}



}


int main()
{
  cout << "[1.2] Enter Value\n";
	string val;
     cin>>val;

isOperator(val);

}

