#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ull T,a,n;
    cin >> T;
    ull sum = 0;
    ull product = 1;
    while( T--){
        cin >> n;
        while(n--){
            cin >> a;
            sum += a;
            product*= a;
        }
        cout << sum * product << endl;
        sum = 0;
        product = 1;
        
    }

}