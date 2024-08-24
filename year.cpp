#include<iostream>
using namespace std;

int solve(){
	int h,m;
		cin >> h >> m;
		int count=0;
			if(h==23){
				cout << (60-m) << endl;
			}
			else{
				int n = 24-h;
				n = n*60 - m;
				cout << n << endl;
			}
		
    return 0;
}

int main(){
	int t;
	cin >> t;

	while(t--){
		solve();	
	}

	return 0;
}