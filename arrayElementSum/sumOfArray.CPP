
//  find sum of elements of array
#include <iostream>
using namespace std;
int main()
{
    int array[5] = {5, 10, 2, 7, 8};
    int sum = 0 ;
    for (int i = 0; i < 5; i++)
    {
        sum = sum +  array[i];
    }

    cout<<"Sum of array: "<< sum;

    return 0 ;
}
