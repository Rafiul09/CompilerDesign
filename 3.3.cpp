
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <bits/stdc++.h>
//#include <boost/algorithm/string.hpp>
//using namespace std;
bool isDelimiter(char ch)
{
    if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' ||
        ch == '/' || ch == ',' || ch == ';' || ch == '>' ||
        ch == '<' || ch == '=' || ch == '(' || ch == ')' ||
        ch == '[' || ch == ']' || ch == '{' || ch == '}')
        return (true);
    return (false);
}
/*bool isValidKeyword(const std::string& keyword) {

  std::string validKeywords[] = { "int", "float", "char", "if", "for", "while" };
    int numValidKeywords = sizeof(validKeywords) / sizeof(validKeywords[0]);


    for (int i = 0; i < numValidKeywords; i++) {
        if (keyword == validKeywords[i]) {
            return true;
        }
    }

    return false;
}*/


bool isValidKeyword(const std::string keyword) {

  std::string validKeywords[] = { "int", "float", "char", "if", "for", "while" };
    int numValidKeywords = sizeof(validKeywords) / sizeof(validKeywords[0]);


    for (int i = 0; i < numValidKeywords; i++) {
        if (keyword == validKeywords[i]) {
            return true;
        }
    }

    return false;
}

/*bool isValidKeyword(char keyword) {

  std::string validKeywords[] = { "int", "float", "char", "if", "for", "while" };
    int numValidKeywords = sizeof(validKeywords) / sizeof(validKeywords[0]);


    for (int i = 0; i < numValidKeywords; i++) {
        if (keyword == validKeywords[i]) {
            return true;
        }
    }

    return false;
}*/


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

bool validVar(char str)
{
    if (str == 'a' || str == 'b' ||
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
        str == 'V' || str == 'W' || str == 'X'|| str == 'Y' || str == 'Z')
        return (true);
    return (false);
}

int main() {

    /*std::string Inp= "int a = 5;";
    std:: cout<<Inp[1]<< std::endl;
   std:: vector <string> Arr0;
    boost::split(Arr0, Inp, boost::is_any_of(" "));

    for (int i = 0; i < v.size(); i++) {
        std::cout << Arr0[i] << endl;
    }*/

    int n = 15;
	char Array[n];
    std::string Arr[n];
    freopen("input.txt", "r", stdin);
    /*std::cin>>Arr[0];
    std::cin>>Arr[1];
    std::cin>>Arr[3];*/

     for(int i=0;i<n;i++)
     {

         std::cin>>Arr[i];
         /*std:: string A=Arr[i];
         std::cout<<"\n Read"<<A[];*/

     }

      if (isValidKeyword(Arr[0]))
        {
            std::cout<< Arr[0] << " Valid keyword identified." << std::endl;
        }
     else if (!isValidKeyword(Arr[0]))
        {
            std::cout<< "Invalid keyword identified. \nLine begins withs: " <<Arr[0]<<"\nNeeds Appropriate Data type in the beginning "<<std::endl;


        }
        //const char* str =Arr[3].c_str();

        std:: string A=Arr[1];
        //std::cout<< A[0];
     if(validVar(A[0]))
        {
            std::cout<< A<<" Identifier detected\nValid Function Name Declared." << std::endl;
        }
       else if(!validVar(A[0]))
        {
            std::cout<< A[0]<<" \nInValid Function Name Declared." << std::endl;
        }
       /* std:: string B= Arr[4];
        if(B[0]=';')
        {
            std::cout<< B[0]<<" Detected\nValid Variable Declared. " << std::endl;
        }
         else if(B[0]!=';')
        {
            std::cout<< B[0]<<" Detected\nInValid Variable Declared. " << std::endl;
        }*/
        std:: string B= Arr[2];
        //std::cout<< B[0];
        if( B[0]==40 && B[1]==41)
        {
            std::cout<< B<<" Detected\nValid Function Declared. " << std::endl;
        }
         else if(B[0]!=40 && B[1]!=41)
        {
            std::cout<< B<<" Detected\nInValid Function Declared. " << std::endl;
        }

        std:: string C= Arr[3];
       //std::cout<< C[0];
        if( C[0]==123 && C[1]==125)
        {
            std::cout<< C<<" Detected\nValid Function Declared. " << std::endl;
        }
         else if(C[0]!=123 && C[1]!=125)
        {
            std::cout<< C<<" Detected\nInValid Function Declared. " << std::endl;
        }

    std::cout <<"\n";
      /*for(int i=0;i<n;i++) {
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
    }*/
    return 0;
}
