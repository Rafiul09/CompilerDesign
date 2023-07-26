
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <bits/stdc++.h>
// #include <boost/algorithm/string.hpp>
// using namespace std;
bool isDelimiter(char ch)
{
    if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' ||
        ch == '/' || ch == ',' || ch == ';' || ch == '>' ||
        ch == '<' || ch == '=' || ch == '(' || ch == ')' ||
        ch == '[' || ch == ']' || ch == '{' || ch == '}')
        return (true);
    return (false);
}

bool isValidKeyword(const std::string keyword)
{

    std::string validKeywords[] = {"int","double","string", "float", "char", "if", "for", "while"};
    int numValidKeywords = sizeof(validKeywords) / sizeof(validKeywords[0]);

    for (int i = 0; i < numValidKeywords; i++)
    {
        if (keyword == validKeywords[i])
        {
            return true;
        }
    }

    return false;
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
        str == '9' || str == 'a' || str == 'b' ||
        str == 'c' || str == 'd' || str == 'e' ||
        str == 'f' || str == 'g' || str == 'h' || str == 'i' || str == 'j' ||
        str == 'k' || str == 'l' || str == 'm' ||
        str == 'n' || str == 'o' || str == 'p' || str == 'q' || str == 'r' ||
        str == 's' || str == 't' || str == 'u' ||
        str == 'v' || str == 'w' || str == 'x' || str == 'y' || str == 'z' || str == 'A' || str == 'B' ||
        str == 'C' || str == 'D' || str == 'E' ||
        str == 'F' || str == 'G' || str == 'H' || str == 'I' || str == 'J' ||
        str == 'K' || str == 'L' || str == 'M' ||
        str == 'N' || str == 'O' || str == 'P' || str == 'Q' || str == 'R' ||
        str == 'S' || str == 'T' || str == 'U' ||
        str == 'V' || str == 'W' || str == 'X' || str == 'Y' || str == 'Z')
        return (true);
    return (false);
}

bool validVar(char str)
{
    if (str == 'a' || str == 'b' ||
        str == 'c' || str == 'd' || str == 'e' ||
        str == 'f' || str == 'g' || str == 'h' || str == 'i' || str == 'j' ||
        str == 'k' || str == 'l' || str == 'm' ||
        str == 'n' || str == 'o' || str == 'p' || str == 'q' || str == 'r' ||
        str == 's' || str == 't' || str == 'u' ||
        str == 'v' || str == 'w' || str == 'x' || str == 'y' || str == 'z' || str == 'A' || str == 'B' ||
        str == 'C' || str == 'D' || str == 'E' ||
        str == 'F' || str == 'G' || str == 'H' || str == 'I' || str == 'J' ||
        str == 'K' || str == 'L' || str == 'M' ||
        str == 'N' || str == 'O' || str == 'P' || str == 'Q' || str == 'R' ||
        str == 'S' || str == 'T' || str == 'U' ||
        str == 'V' || str == 'W' || str == 'X' || str == 'Y' || str == 'Z')
        return (true);
    return (false);
}

int main()
{

    std::vector<std::string> strings;
    std::string filename = "input.txt";
    std::ifstream inputFile(filename);

    std::string line;
    while (std::getline(inputFile, line))
    {
        std::stringstream ss(line);
        std::string word;
        while (ss >> word)
        {
            strings.push_back(word);
        }
    }

    inputFile.close();

    std::cout << "Strings in the vector: ";
    for (const std::string &str : strings)
    {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    if (isValidKeyword(strings[0]))
    {
        std::cout << strings[0] << " Valid keyword identified." << std::endl;

        std::string A = strings[1];


        if (validVar(A[0]))
        {
            std::cout << A << " Identifier detected\nValid Name Declared." << std::endl;
        }
        else if (!validVar(A[0]))
        {
            std::cout << A[0] << " \nInValid Name Declared." << std::endl;
        }

        if (A.length() > 1)
        {
            std::cout << A[A.length()-1] << " Detected\nValid Variable Declared. " << std::endl;

            if ( A[A.length() - 1 ] == 59 )
            {
              std::cout << A[A.length()-1] << " Detected\nValid Variable Declared. " << std::endl;
            }
            else if (A[A.length() - 1] != 59)
            {
              std::cout << A[A.length() - 1] << " Detected\nInValid Variable Declaration. " << std::endl;
            }

        }
        else if (A.length() == 2 && A[A.length() - 1] == 59)
        {
            std::cout << A[A.length() -1] << " Detected\nInValid Variable Declaration. " << std::endl;
        }
       else
            {
              std::cout << A[A.length() - 1] << " Detected\nInValid Variable Declaration. " << std::endl;
            }

        std::string B = strings[2];
        // std::cout<< B[0];
        if (B[0] == 40 )
        {
            std::cout << B[0] << " Detected\n" << std::endl;
          if( B[B.length()-2] == 41)
          {
               std::cout << B[B.length()-2] << " Detected\n" << std::endl;
            if (B[B.length()-1] == 59)
            {
              std::cout << B[B.length()-1] << " Detected\nValid Function Declaration. " << std::endl;
            }



          }



        }
        else if (B[0] != 40 && B[1] != 41)
        {
            std::cout << B << " Detected\nInValid Function argument found. " << std::endl;
        }

        std::string C = strings[3];
        // std::cout<< C[0];
        if (C[0] == 123 && C[1] == 125)
        {
            std::cout << C << " Detected\nValid Function  Defined. " << std::endl;
        }
        else if (C[0] != 123 && C[1] != 125)
        {
            std::cout << C << " Detected\nInValid Function Defined. " << std::endl;
        }

        std::cout << "\n";
    }
    else if (!isValidKeyword(strings[0]))
    {
        std::cout << "Invalid keyword identified. \nLine begins withs: " << strings[0] << "\nNeeds Appropriate Data type in the beginning " << std::endl;
    }


    return 0;
}
