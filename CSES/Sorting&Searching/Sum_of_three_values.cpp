#include <bits/stdc++.h>

using namespace std;

//solved

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x,a;
    cin >> n >> x;
    vector<pair<int,int>> arr;
    for (int i = 0;i<n ;i++){
        cin >> a;
        arr.push_back(make_pair(a,i));
    }
    int pt1,pt2;
    int br = 0;
    sort(arr.begin(),arr.end());
    for(int i = 0;i<n;i++){
        pt1 =  i+1;
        pt2 =  n-1;
        while(pt1 < pt2){
            if (arr[pt1].first + arr[pt2].first + arr[i].first == x){
                cout << arr[pt1].second +1 << " " <<arr[pt2].second +1  <<" "<< arr[i].second +1 << endl;
                br = 1;
                break;
            }
            else if (arr[pt1].first + arr[pt2].first + arr[i].first < x){
                pt1++;
            }
            else {
                pt2--;
            }
        }
        if (br == 1){
            break;
        }

    }
    if (br == 0){
        cout << "IMPOSSIBLE" << endl;
    }
}