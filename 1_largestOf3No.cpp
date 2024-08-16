#include<iostream>
#include<climits>
using namespace std;
int main() {
	int a,b,c;
	cin>> a>> b>> c;
	int largest = INT_MIN;
	if(a>=b && a>=c){
		largest =a;
	}
	else if(b>=a && b>=c){
		largest = b;
	}
	else{
		largest= c;
	}
cout << largest << endl;
	return 0;
}