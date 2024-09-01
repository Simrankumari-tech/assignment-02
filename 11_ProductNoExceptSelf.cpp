#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n ; i++)
    {
        cin >> a[i] ;
    }
    int left[n], right[n];
    int result[n] ;
    left[0] = 1;
    for(int i=1; i<n; i++){
        left[i] = left[i-1] *a[i-1];
    }
    right[n-1] = 1;
    for(int i = n-2 ;i>=0 ;i--){
        right[i] =right[i+1] * a[i+1] ;
    }
    for(int i =0; i<n; i++){
        result[i] = left[i] * right[i];
        cout << result[i] <<" " ;
    }
    cout << endl; 
    return 0;
}