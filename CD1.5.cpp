#include <iostream>
using namespace std;

int main()
{
    int x[] = {1,2,3,4,5,6,9,10,20};
    int lenght= sizeof(x) / sizeof(x[0]);
    int sum = 0;
    float avg = 0;

    for (int i = 0; i < lenght; i++)
    {
        sum += x[i];
    }

    avg = sum / lenght;

    cout << "Average : " << avg << endl;
}

