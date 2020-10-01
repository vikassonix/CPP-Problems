#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter 2  num: \n";
    cin>>x>>y;
   // Some code
   cout << "\nBefore try \n";
   try {
   	if(y==0)
	   throw y;
	cout<<x/y;
   }
   catch (int y) {
      cout << "Exception Caught";
   }
   cout << "\nAfter catch (Will be executed)\n";
   return 0;
}
