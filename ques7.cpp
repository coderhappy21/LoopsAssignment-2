#include<iostream>
using namespace std;
int main(){

   //print all factorial from 1 to n
int n ;
cout<<"enter a number : ";
cin>>n;


for(int i = 1 ; i<= n ; i++){
    int fact = 1;
   for(int j = 1 ; j<=i ; j++){
fact*=j;
}
cout<<"Factorial of "<<i<<" is : "<<fact<<endl;

}

}