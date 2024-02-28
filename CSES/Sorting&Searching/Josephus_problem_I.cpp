#include <bits/stdc++.h>

using namespace std;


//solved
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> remaining;
    for (int i = 1;i<n+1;i++){
        if (i%2 == 0){
            cout << i << " ";
        }
        else {
            remaining.push_back(i);
        }

    }
    int pt;
    if (n%2 == 0){
        pt = 0;
    }
    else {
        pt = remaining.size() -1;
    }

    while (!remaining.empty()){
        if (remaining.size() == 1){
            cout << remaining[0] << " ";
            break;
        }
        if (pt < remaining.size() - 2){
            cout << remaining[pt + 1] << " ";
            remaining.erase(remaining.begin() + pt + 1);
            pt++;
        }
        else if (pt == remaining.size() -1){
            cout << remaining[0] << " ";
            remaining.erase(remaining.begin());
            pt= 0;
        }
        else if (pt == remaining.size() -2){
            cout << remaining[remaining.size()-1] << " ";
            remaining.erase(remaining.end() - 1);  // Corrected line
            pt = 0;
        }

        }
}