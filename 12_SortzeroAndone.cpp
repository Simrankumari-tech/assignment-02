#include<iostream>
using namespace std;
int main(){
     int N;
     int count = 0;
    cin >> N;
    int a[N];
    for(int i =0; i<N;i++){
        cin >> a[i] ;
    }
    for(int i= 0; i<N ;i++){
        if(a[i] == 0){
            swap(a[i] ,a[count]);
            count++;
        }
    }
     for(int i =0; i<N;i++){
        cout << a[i] << " ";
    }
    return 0;
}
