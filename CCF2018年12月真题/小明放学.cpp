#include <iostream>
using namespace std;

int r, y, g;
int n;
int k;
int t;
long long sum = 0;
int sum1 = 0;

int main(){
	cin >> r >> y >> g;
	cin >> n;
	while(n){
		cin >> k >> t;
		if(k == 0){
			sum += t;
		}
		else if(k == 1){
			sum1 = sum % (r+g+y);
			if(sum1 < t){
				sum += t - sum1;
			}
			else if(sum1 >= t && (sum1 < t+g)){
				;
			}
			else if(sum1 >= t+g && sum1 < t+g+y){
				sum += t+g+y-sum1+r;
			}
			else if(sum1 >= t+g+y && sum1 < r+g+y){
				sum += r+g+y+t-sum1;
			}
		}
		else if(k == 2){
			sum1 = sum % (r+g+y);
			if(sum1 < t){
				sum += t-sum1+r;
			}
			else if(sum1 >= t && sum1 < t+r){
				sum += t+r-sum1;
			}
			else if(sum1 >= t+r && sum1 < t+r+g){
				;
			}
			else if(sum1 >= t+r+g && sum1 < r+g+y){
				sum += r+g+y+t-sum1+r;
			}
		}
		else if(k == 3){
			sum1 = sum % (r+g+y);
			if(sum1 < t){
				;
			}
			else if(sum1 >= t && sum1 < t+y){
				sum += t+y-sum1+r;
			}
			else if(sum1 >= t+y && sum1 < t+r+y){
				sum += t+r+y-sum1;
			}
			else if(sum1 >= t+r+y && sum1 < r+g+y){
				;
			}
		}
		n--;
	}
	cout << sum;
	return 0;
}

