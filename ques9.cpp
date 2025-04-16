#include<iostream>
using namespace std;
int main(){

//print all possible comb. 1,2,3,4
int n = 4;
int count = 0;
for(int i = 1 ; i<= n ; i++){ 
    for(int j = 1 ; j<= n ; j++){
        for(int k = 1 ; k<= n ; k++){
            for(int l = 1 ; l<= n ; l++){
  cout<<i<<" "<<j<<" "<<k<<" "<<l;
  count++;
  cout<<endl;
}}}}
cout<<"total possible combinations is:" <<count;

cout<<endl;
cout<<endl;


//for unique possible commbinations of 1,2,3,4 without repetation
int cnt = 0;
for(int i = 1 ; i<= n ; i++){ 
    for(int j = 1 ; j<= n ; j++){
        for(int k = 1 ; k<= n ; k++){
            for(int l = 1 ; l<= n ; l++){
                if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l)
  {cout<<i<<" "<<j<<" "<<k<<" "<<l;
  cnt++;}
  else continue;
  cout<<endl;
}}}}
cout<<"total unique possible combinations is:" <<cnt;
}