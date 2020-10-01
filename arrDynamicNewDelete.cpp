#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
	int *p = new int[n];
	cout<<"Enter" <<n<<" values: ";

    for(int i=0;i<n;i++)
        cin>>p[i];
	for(int i=0;i<n;i++)
        cout<<p[i]<<endl;

    delete[] p;
return 0;
}
