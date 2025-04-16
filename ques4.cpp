#include<iostream>
using namespace std;
int main(){

   // predict the output - 
int x = 10 , y = 0;
while(x>=y){
    x--;
    y++;
    cout<<x<<" "<<y<<endl;
}

//x = 9 , y = 1
//x = 8 , y = 2
//x = 7 , y = 3
//x = 6 , y = 4
//x = 5 , y = 5
//x = 4 , y = 6
//Ans - loop will execute 1 more time than cond.
//bcz when x = 5 , y = 5 it enters into loop
// it first change the values and then print it
//but not again it will enter when x = 4, y= 6
}
