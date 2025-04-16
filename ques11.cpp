#include <iostream>
using namespace std;
int main()

{ // 1,1,2,3,5,8,13,21,34,55... fibonacci series...
    int a = 1;
    int b = 1;
    int fibo = 1;  
     cout<<"1"<<endl;   
     cout<<"1"<<endl;   
    
    for (int i = 3; i <= 10; i++)
    {
        fibo = a + b;
        a = b;
        b = fibo;
        cout<<fibo<<endl;
    }

   
}