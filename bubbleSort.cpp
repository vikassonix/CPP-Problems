#include<iostream>
using namespace std;
template<class T>
void insertion(T a[],int n){
    int i,j,loc;
    T temp;
     for(i=1;i<n;i++){
        j=i-1;
        temp=a[i];
        while(a[j]>temp&&j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    cout<<"\n\nInsertion Sort: "<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

template<class T>
void selection(T a[],int n){
    int i,j,loc;
    T temp;
    for(i=0;i<n;i++){
        temp=a[i];
        loc=i;
        for(j=i+1;j<n;j++){
            if(a[j]<temp){
                loc=j;
                temp=a[j];
            }
        }
        a[loc]=a[i];
        a[i]=temp;
    }
    cout<<"\n\nSelection Sort: "<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

template<class T>
void bubble(T a[],int n){
    int i,j;
    T temp;
    for(i=0;i<n;i++){
            for(j=0;j<n-1-i;j++){
                if(a[j]>a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
    }
    cout<<"\n\nBubble Sort: "<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

int main()
{
	int arr[10]={12,25,65,42,11,5,40},n=7;
	cout<<"Before Sorting: "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
	bubble<int>(arr,n);
	selection<int>(arr,n);
	insertion<int>(arr,n);
}
