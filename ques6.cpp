#include<iostream>
using namespace std;
int main(){

   //sum of given digit & its reverse
int n ;
cout<<"enter a number : ";
cin>>n;
int x = n;
int rev = 0;
while(n>0){
    rev*=10;
   rev += n%10;
   n/=10;
}

int sum = x+rev;
cout<<"Sum of given num & rev: "<<sum;
}
