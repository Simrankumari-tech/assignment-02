#include<iostream>
using namespace std;
int main(){
    int N,M;
    cin >> N;
    int a[N] ;  // declare the array with size N
    for(int i=0; i<N ; i++){
        cin >>  a[i] ;
    } 
    cin >> M;
    int index = -1;
    for(int i= 0; i<N ; i++){
        if(a[i] == M){
            index = i;
            break;
            }
    }
    cout << index << endl;
    return 0;
}