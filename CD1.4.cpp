#include <bits/stdc++.h>
using namespace std;


bool Validater(string str, int n)
{

    if (!((str[0] >= 'a' && str[0] <= 'z')|| (str[0] >= 'A' && str[0] <= 'Z')|| str[0] == '_'))
        return false;

    for (int i = 1; i < str.length(); i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z')|| (str[i] >= 'A' && str[i] <= 'Z')|| (str[i] >= '0' && str[i] <= '9')|| str[i] == '_'))
            return false;
    }


    return true;
}

int main()
{
    cout << "[1.4] Enter Value:\n";
    string str ;

    cin>>str;
    int n = str.length();

    if (Validater(str, n))
        cout << "Input is a Valid Identifier";
    else
        cout << "Input is an Invalid Identifier";

    return 0;
}
