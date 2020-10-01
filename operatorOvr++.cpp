#include<iostream>
using namespace std;

class demo{
    private:
        int a,b,c;
    public:
    	demo(){
    		a=0;b=0;c=0;
		}
        demo(int x,int y,int z){
            a=x;
            b=y;
            c=z;
        }
        void operator ++(){
        	a++;
        	b++;
			c++;
		}
		void operator -(){
        	a=-a;
        	b=-b;
			c=-c;
		}
		demo operator +(demo d){
			demo d3;
			d3.a=a+d.a;
			d3.b=b+d.b;
			d3.c=c+d.c;
			return d3;
		}
        
        void show(){
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
};

int main(){
    demo d(5,10,15);
	d.show();
	//++d;
	demo d1(10,10,10);
	d1.show();
	demo d3;
	d3=d+d1;
	d3.show();
    
}
