#include<iostream>
#include<climits>
using namespace std;
int main(){
    int N;
    cin >> N;
    int a[N];
    int largest =INT_MIN;
     for (int i = 0; i < N; i++) {
        cin >> a[i]; // Input elements into the array
    }
    for(int i= 0; i<N; i++){
        if(a[i] > largest){
            largest = a[i] ;
        }
    }
    cout << largest << endl;
    return 0;
}