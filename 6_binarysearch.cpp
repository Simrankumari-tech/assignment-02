
// 2 testcase sahi hai
#include<iostream>
using namespace std;
int binarysearch(int a[] , int N, int M){
    int s= 0, e= N-1;
    while(s<= e){
        int mid = (s+e)/2;
        if(a[mid] == M) return mid;
        else if( a[mid] > M) e = mid -1 ;
        else{
            s = mid +1;
        }
    }
    return -1;

}
int main(){

int N;
cin >> N;
int a[N];
for(int i=0;i<N; i++){
    cin >> a[i];
}
cout << binarysearch(a,N,6);

    return 0;
}