#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
typedef struct linknode{
    int data;
    struct linknode *next;
}node;
node *start,*last;
void create();
void display();
int main(){
    int ch;
    while(1){
        cout<<"\nEnter\n1: Create\n2: Display: \n3.Exit \n";
        cin>>ch;
        switch(ch){
            case 1: create();
            break;
            case 2: display();
            break;
            case 3: exit(0);
        }
    }
return 0;
}
void create(){
	node *temp=new node;
	cout<<"Enter data : ";
	cin>>temp->data;
	temp->next=NULL;
	if(start==NULL){
		start=temp;
		last=temp;
	}else{
		last->next=temp;
		last=temp;
	}
}
void display(){
	node *p;
	p=start;
	while(p!=NULL){
		cout<<p->data<< "  ";
		p=p->next;
	}
}
