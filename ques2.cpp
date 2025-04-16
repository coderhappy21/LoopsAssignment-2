#include<iostream>
using namespace std;
int main(){

 // predict the output - 
int t = 10;
while(t = 21){
    cout<<"hello"<<endl;
}


//Ans - output will give infinite loop endless 
//bcz acc. to loop cond. it assign 21 into t
//and this cond. will always true 
//there is no cond. to stop loop  
//segmentation fault!
}
