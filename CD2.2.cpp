#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
bool isDelimiter(char ch)
{
    if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' ||
        ch == '/' || ch == ',' || ch == ';' || ch == '>' ||
        ch == '<' || ch == '=' || ch == '(' || ch == ')' ||
        ch == '[' || ch == ']' || ch == '{' || ch == '}')
        return (true);
    return (false);
}
bool isOperator(char cha)
{
    if (cha == '+' || cha == '-' || cha == '*' ||
        cha == '/' || cha == '>' || cha == '<' ||
        cha == '=')
        return (true);
    return (false);
}
bool validIdentifier(char str)
{
    if (str == '0' || str == '1' || str == '2' ||
        str == '3' || str == '4' || str == '5' ||
        str == '6' || str == '7' || str == '8' ||
        str == '9'|| str == 'a' || str == 'b' ||
        str == 'c' || str == 'd' || str == 'e' ||
        str == 'f' || str == 'g' || str == 'h'|| str == 'i' || str == 'j' ||
        str == 'k' || str == 'l' || str == 'm' ||
        str == 'n' || str == 'o' || str == 'p'|| str == 'q' || str == 'r' ||
        str == 's' || str == 't' || str == 'u' ||
        str == 'v' || str == 'w' || str == 'x'|| str == 'y' || str == 'z'|| str == 'A' || str == 'B' ||
        str == 'C' || str == 'D' || str == 'E' ||
        str == 'F' || str == 'G' || str == 'H'|| str == 'I' || str == 'J' ||
        str == 'K' || str == 'L' || str == 'M' ||
        str == 'N' || str == 'O' || str == 'P'|| str == 'Q' || str == 'R' ||
        str == 'S' || str == 'T' || str == 'U' ||
        str == 'V' || str == 'W' || str == 'X'|| str == 'Y' || str == 'Z' )
        return (true);
    return (false);
}


int main() {


    int n = 15;
	char Array[n];

    freopen("input.txt", "r", stdin);
     for(int i=0;i<n;i++)
     {

         std::cin>>Array[i];
         std::cout<<Array[i];

     }

    std::cout <<"\n";
    for(int i=0;i<n;i++) {
          if (isOperator(Array[i])) {
            std::cout<< Array[i] << " is an operator." << std::endl;
        }
       else if (validIdentifier(Array[i])) {
            std::cout << Array[i] << " is a valid identifier." << std::endl;
           // break;
        }else  if (isDelimiter(Array[i])) {
            std::cout << Array[i] << " is a Delimiter." << std::endl;

        }  else {
            std::cout << Array[i]<< " is an invalid token." << std::endl;

    }
    }
    return 0;
}

