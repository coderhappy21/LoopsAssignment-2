#include<iostream>
using namespace std;
int main(){

   //print sum of the series 2 + 22 + 222....
int n ;
cout<<"enter a number : ";
cin>>n;

int num = 0;
int sum = 0;
for(int i = 1 ; i<= n ; i++){
num = num*10+2;
sum+=num;
}
cout<<"sum of above series is : "<<sum<<endl;

}