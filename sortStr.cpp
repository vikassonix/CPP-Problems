#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	string str[10],temp;
	for(int i=0;i<5;i++){
        cout<<"Enter Name: ";
        getline(cin,str[i]);
	}
	sort(str,str+5);

	for(int i=0;i<5;i++){
        cout<<"Hello String"<<str[i]<<"\n";
	}
return 0;
}


