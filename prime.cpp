#include<iostream>
using namespace std;
int main(){
	int n, count = 0, flag = 1;
	cin >> n;
	for(int i = 2;i < n ; i++){
		if(n % i == 0){
			return 0;
		}
	if (flag){
		count++;
		if(count == n){
			return 0;
		}
	}
	}
	return 0;
}