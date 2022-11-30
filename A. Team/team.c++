#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{   
    int n,result = 0; cin>>n;

    for (int i = 0; i < n; i++)
    {
        int number1,number2,number3; cin>>number1>>number2>>number3;
        result += number1 + number2 + number3 >= 2;
    }
    cout<<result<<endl;
    return 0;
}