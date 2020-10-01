#include<iostream>
using namespace std;

class parent{
    public:
        virtual void show(){
            cout<<"In Class Parent"<<endl;
        }
};
class child:public parent{
    public:
        void show(){
            cout<<"In Class Child"<<endl;
        }
};

int main(){
    parent *p,pt;
    p=&pt;
    p->show();
    child c;
    p=&c;
    p->show();
}
