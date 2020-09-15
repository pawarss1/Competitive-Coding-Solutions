#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
    	int size;
    	cin >> size;
    	set <long long> numbers;
    	int ans=0;
    	for(int i = 0; i < size; i++){
    		int input;	
    		cin >> input;
			numbers.insert(input);
		}
		cout << numbers.size();
		cout <<endl;
	}
    return 0;
}
