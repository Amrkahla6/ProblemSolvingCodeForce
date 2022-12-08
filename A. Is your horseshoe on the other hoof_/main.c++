#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<cmath>

using namespace std;

int main()
{   
   	int shos[4]={};

	for(int i=0;i<4;i++){
		cin>>shos[i];
	}

	int temp;

	for(int i=0;i<4;i++){
		for(int j=i+1;j<4;j++){
			if(shos[j]>shos[i]){
		    temp = shos[j];
			shos[j] = shos[i];
			shos[i] = temp;
            }
		}
	}
int continer=0;
for(int i=0;i<4;i++){
	if(shos[i]==shos[i+1])continue;
	else
		continer++;
}
cout<<4-continer<<endl;
 
return 0;
}