#include<iostream>
using namespace std;
int main()
{
    int num, rem, sum, i, quo;
    for (int i = 2; i <= 15; i++)
    {
        sum = 0;
        num = i;
        while (i > 0)
        {
            rem = i % 10;
            sum = sum + (rem * rem * rem);
            i /= i;
        }
        if (sum==num)
        {
            cout<<i<<"Armstrong";
        }
        cout<<"/*//////";
        
        cout<<endl;
    }

    cout <<"hhhhhhh";
    return 0;
}