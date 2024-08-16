#include<iostream>
using namespace std;
int digitsum(int n){
	int ans = 0;
	while(n>0){
	int ld = n % 10;
	ans += ld;
	n/= 10;
}
return ans;
}
int primefactorsdigitsum(int n){
	int pf =2;
	int prime_factors_digitsum =0;
	while(n>1){
		while((n % pf) == 0){
			prime_factors_digitsum += digitsum(pf);
			n/= pf;
		}
		pf++;
	}
	return prime_factors_digitsum;
}
int main() {
int n;
cin >> n;
int sum_of_digits = digitsum(n);
int sum_of_pf_digitsum = primefactorsdigitsum(n);

if( sum_of_digits  == sum_of_pf_digitsum  ){
	cout << 1;
}
else {
	cout << 0;
}
cout << endl;
	return 0;
}