#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

char inp[4][4];

bool test(int i, int j){
    if(i+1 == 4 || j+1 == 4) 
        return false;

    return inp[i][j] == inp[i][j+1] && inp[i][j] == inp[i+1][j] && inp[i][j] == inp[i+1][j+1];
}

bool test(){
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
            if(test(i,j)) 
                return true;
    }

    return false;
    
}


int main()
{  

    // freopen("c.in","rt",stdin);

    for (int i = 0; i < 4; ++i)
    {
         for (int j = 0; j < 4; ++j)
            cin>>inp[i][j];
    }

    bool weDidiIt = test(); 

    for (int i = 0; i < 4; ++i)
    {
         for (int j = 0; j < 4; ++j)
        {
            char orginal = inp[i][j];

            if(inp[i][j] == '.')
                inp[i][j] = '#';
            else
                inp[i][j] = '.';

            if(test())
                weDidiIt = true;

            inp[i][j] = orginal;
        }
    }

    if(weDidiIt)
        cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;

    
    return 0;
}