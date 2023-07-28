#include <iostream>
using namespace std;

int main()
{
     cout << "[1.6] Enter array size:\n";
    int x;
    int lenght;
    cin>>lenght;
    int arr[100];
    for (int i = 0; i < lenght; i++)
    {
         cin>>x;
         arr[i]=x;
    }


    int sum = 0;
    float avg = 0;

    for (int i = 0; i < lenght; i++)
    {
        sum += arr[i];
    }

    avg = sum / lenght;

    cout << "Average : " << avg << endl;
}

