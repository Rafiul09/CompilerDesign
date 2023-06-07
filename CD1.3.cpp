#include <bits/stdc++.h>
using namespace std;

void isOperator(string val)
{
	char arr[]={'/','*'};


		for (int j = 0; j < val.length(); j++)
        {
		 if (arr[0]+arr[0]==val[j]+val[j+1])
            {
             cout << "\nsingle line comment found ";
            }
           else if (arr[0]+arr[1]==val[j]+val[j+1] )
            {

              cout << "\nMultiple line comment found ";

                }
            }





}


int main()
{
  cout << "[1.3] Enter Value\n";
	string val;
     cin>>val;

isOperator(val);

}

