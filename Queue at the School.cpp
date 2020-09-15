#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int time;
    cin >> time;
    char inputString[100];
    cin >> inputString;
    int  j = 0;
    while(j < time){
    	int i = 0;
	    while(i < strlen(inputString)-1){
	    	if(inputString[i] == 'B' && inputString[i+1] == 'G'){
	    		char temp = inputString[i];
				inputString[i] = inputString[i+1];
				inputString[i+1] = temp;
	    		i += 2;
			}
			else{
				i++;	
			}
		}
		j++;
	}
	cout << inputString;
    return 0;
}
