#include <iostream>
using namespace std;
int sumOfEvenNumbers(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i=i+2)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int output = sumOfEvenNumbers(n);
    cout << "Sum of even numbers upto " << n << " is " << output << endl;
}