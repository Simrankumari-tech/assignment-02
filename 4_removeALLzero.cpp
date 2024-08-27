#include<iostream>
using namespace std;
int convertzeroToFive(int N){
    // base case
    if(N == 0) return 0;

    // recursive case
int digit = N % 10;
if(digit == 0) digit = 5;
return convertzeroToFive(N/10) *10 + digit ;
}
int main(){
    int N;
    cin >> N;
cout <<  convertzeroToFive(N) ;
    
    return 0;
}