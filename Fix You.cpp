#include <bits/stdc++.h>

using namespace std;

int main()
{
	int test;
	cin >> test;
	for(int k = 0; k < test; k++){
	    int n, m;
	    cin >> n;
	    cin >> m;
	    vector<vector<int> > inputPath( n , vector<int> (m, 0));  
	    char input;
	    for(int i = 0; i < n; i++){
	    	for(int j = 0; j < m; j++){
			cin >> input;
			if(input == 'R'){
				inputPath[i].push_back(1);	
			}
			else if(input == 'D'){
				inputPath[i].push_back(0);	
			}
			else{
				inputPath[i].push_back(-1);	
			}
		 }
		}
		int ans = 0;
		for(int i = 0; i < n; i++){
	    	if(inputPath[i][m-1] == 1){
	    		ans += 1;
		}
	    }
	    for(int i = 0; i < m; i++){
	    	if(inputPath[n-1][i] == 0){
	    		ans += 1;
			}
	    }
		cout <<ans<< endl;
	}	
    return 0;
}
