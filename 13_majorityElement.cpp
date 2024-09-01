#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count= 0;
    int majority_element = 0;
    int a[n] ;
    for(int i= 0; i<n;i++){
        cin >> a[i] ;
    }
    for(int i=0; i<n ;i++){
        if(count == 0){
            majority_element = a[i];
        }
        if(majority_element == a[i]) count ++;
        else count--;
    }
      count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == majority_element) {
            count++;
        }
    }
    if(count > n/2){
        cout << majority_element << endl;
    }
    else {
        cout << "not" << endl;
    }
return 0;
}