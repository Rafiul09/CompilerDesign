#include <iostream>
#include <cstring>
#include <string>
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


bool isValidKeyword(const std::string keyword)
{

    std::string validKeywords[] = {"int", "float", "char", "if", "for", "while", "void"};
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
    while (std::getline(inputFile, line))///getline() function extracts characters from the file
    {
        std::stringstream ss(line); ///stringstream is used for parsing the line works allows a string object to be treated as a stream.
                                    ///It is used to operate on strings.
                                    ///By treating the strings as streams we can perform extraction and insertion operation from
                                    ///to string just like cin and cout streams
        std::string word;
        while (ss >> word) ///extraction operation from ss to word then pushing it to strings vector,
        {                  ///eventually capturing the line through iteration
            strings.push_back(word);
        }
        int Vlen = strings.size(); /// vector length

        std::cout << "Strings in the vector: ";
        for (const std::string &str : strings)
        {
            std::cout << str << " ";
        }
        std::cout << std::endl;
        switch (Vlen)
        {
        case 1:

            break;

        case 2: // variable declaration

            if (isValidKeyword(strings[0]))
            {
                std::cout << strings[0] << " Valid keyword identified." << std::endl;


                if (validVar(strings[1][0]))
                {
                    std::cout << strings[1] << " Identifier detected\nValid Identifier Name." << std::endl;
                }
                else if (!validVar(strings[1][0]))
                {
                    std::cout << strings[1][0] << " \nInValid Identifier Name." << std::endl;
                }


                if (strings[1][1] == 59) // 59=;
                {
                    std::cout << strings[1][1] << " Detected\nValid Variable Declared . " << std::endl;
                }
                else if (strings[1][1] != 59)
                {
                    std::cout << strings[1][1] << " Detected\nInValid Variable Declared. " << std::endl;
                }
            }
            else if (!isValidKeyword(strings[0]))
            {
                std::cout << "Invalid keyword identified. \nLine begins withs: " << strings[0] << "\nNeeds Appropriate Data type in the beginning " << std::endl;
            }

            break;
        case 3:
            if (isValidKeyword(strings[0]))
            {
                std::cout << strings[0] << " Valid keyword identified." << std::endl;

                if (validVar(strings[1][0]))
                {
                    std::cout <<strings[1] << " Identifier detected\nValid Identifier Name." << std::endl;
                }
                else if (!validVar(strings[1][0]))
                {
                    std::cout << strings[1][0] << " \nInValid Identifier Name." << std::endl;
                }


                if (strings[2][0] == 40 && strings[2][1] == 41 && strings[2][2] == 59)
                {
                    std::cout << strings[2] << " Detected\nValid Function With no argument Declared. " << std::endl;
                }
                else if (strings[2][0] != 40 || strings[2][1] != 41 || strings[2][2] != 59)
                {
                    std::cout << strings[2] << " Detected\nInValid Function declaration . " << std::endl;
                }
            }
            else if (!isValidKeyword(strings[0]))
            {
                std::cout << "Invalid keyword identified. \nLine begins withs: " << strings[0] << "\nNeeds Appropriate Data type in the beginning " << std::endl;
            }

            break;

        case 4:

            if (isValidKeyword(strings[0]))
            {
                std::cout << strings[0] << " Valid keyword identified." << std::endl;


                if (validVar(strings[1][0]))
                {
                    std::cout << strings[1] << " Identifier detected\nValid Name Declared." << std::endl;
                }
                else if (!validVar(strings[1][0]))
                {
                    std::cout << strings[1][0] << " \nInValid Name Declared." << std::endl;
                }


                if (strings[2][0] == 40 && strings[2][1] == 41)
                {
                    std::cout << strings[2] << " Detected\nValid Function With no argument Declared. " << std::endl;
                }
                else if (strings[2][0] != 40 && strings[2][1] != 41)
                {
                    std::cout << strings[2]<< " Detected\nInValid Function argument found. " << std::endl;
                }


                if (strings[3][0] == 123 && strings[3][1] == 125)
                {
                    std::cout << strings[3] << " Detected\nValid Function  Declared. " << std::endl;
                }
                else if (strings[3][0] != 123 && strings[3][1] != 125)
                {
                    std::cout << strings[3] << " Detected\nInValid Function Declared. " << std::endl;
                }

                std::cout << "\n";
            }
            else if (!isValidKeyword(strings[0]))
            {
                std::cout << "Invalid keyword identified. \nLine begins withs: " << strings[0] << "\nNeeds Appropriate Data type in the beginning " << std::endl;
            }

            break;

        case 7:

            if (isValidKeyword(strings[0]) && strings[0] != "void")
            {
                std::cout << strings[0] << " Valid keyword identified." << std::endl;


                if (validVar(strings[1][0]))
                {
                    std::cout << strings[1] << " Identifier detected\nValid Name Declared." << std::endl;
                }
                else if (!validVar(strings[1][0]))
                {
                    std::cout << strings[1][0] << " \nInValid Name Declared." << std::endl;
                }


                if (strings[2][0] == 40 && strings[2][1] == 41)
                {
                    std::cout << strings[2] << " Detected\nValid Function With no argument Declared. " << std::endl;
                }
                else if (strings[2][0] != 40 && strings[2][1] != 41)
                {
                    std::cout << strings[2] << " Detected\nInValid Function argument found. " << std::endl;
                }


                if (strings[3] == "{")
                {
                    std::cout << strings[3] << " Detected\nCurly Braces Open. " << std::endl;
                    if (strings[4] == "return")
                    {
                        std::cout << strings[4] << " Detected\nReturn keyword found . " << std::endl;
                    }
                    else if (strings[4] != "return")
                    {
                        std::cout << strings[4] << " Detected\nNo Return keyword found . " << std::endl;
                    }

                    if (validVar(strings[5][0]) && strings[5][1] == ';')
                    {
                        std::cout << strings[5] << " Detected\nReturn Statement is Valid . " << std::endl;
                    }
                    else if (!validVar(strings[5][0]) || strings[5][1] != ';')
                    {
                        std::cout << strings[5] << " Detected\nReturn Statement is InValid . " << std::endl;
                    }
                    if (strings[6] == "}")
                    {
                        std::cout << strings[6] << " Detected\nCurly Braces closed\nValid Function Declared. " << std::endl;
                    }
                    else if (strings[3] != "{")
                    {
                        std::cout << strings[3] << " Detected\nInValid Function Syntax. " << std::endl;
                    }

                    std::cout << "\n";
                }
            }
            else if (!isValidKeyword(strings[0]))
            {
                std::cout << "Invalid keyword identified. \nLine begins withs: " << strings[0] << "\nNeeds Appropriate Data type in the beginning " << std::endl;
            }

            break;

        default:
            break;
        }

        std::cout << std::endl;

        strings.clear();
    }

    inputFile.close();

    return 0;
}
