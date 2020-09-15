#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
	for(int i = 0; i < n; i++){
		int num;
		cin >> num;
		if(num % 4 == 0){
			cout << "YES" << endl;
			for(int j = 2; j <= num; j += 2){
				cout << j <<" ";
			}
			for(int j = 1; j <= num-2; j += 2){
				cout << j <<" ";
			}
			int temp = (num/2) - 1 + num;
			cout << temp;
		}
		else{
			cout << "NO";
		}
		cout << endl;
	}
    return 0;
}
