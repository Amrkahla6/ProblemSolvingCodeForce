#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<cmath>

using namespace std;

int main()
{   

int input;

cin>>input;

char shos[input]={};

for (int i = 0; i < input; i++)
{
   cin>>shos[i];
}

int continer=0;
for(int i=0;i<input;i++){
	if(shos[i]==shos[i+1])continue;
	else
		continer++;
}
cout<<input-continer<<endl;
return 0;
}