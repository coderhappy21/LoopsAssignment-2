#include<iostream>
using namespace std;
int main(){

   // predict the output -
for(int i = 1; i<=10; i++){
    cout<<i;
    if(i==5) continue;
    cout<<" hello world"<<endl;

}


//output - skip the (hello world) when i = 5 
//bcz continue statement & execute 9 times
//and when i = 11 , loop will break

}
