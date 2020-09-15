#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int ans = 0;
    ans = (m/2)*n;
    if(m%2 != 0){
    	ans += n/2;
	}
	cout << ans;
}
