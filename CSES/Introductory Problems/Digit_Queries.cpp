#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
vector<ull> intervals;
vector<ull> prefix;

//not solved
char solve(ull k){
    if (k < 10){
        return to_string(k)[0];
    }
    else {
        ull pos  = lower_bound(prefix.begin(),prefix.end(),k) - prefix.begin();
        ull rel_pos = k - prefix[pos -1] - 1;
        ull pos_in_num = rel_pos % (pos + 1);
        ull in_num = floor(rel_pos/(pos+1));
        for (ull i = 0;i< pos;i++){
            in_num += floor(intervals[i]/(i+1)) + 1;
        }
        return to_string(in_num)[pos_in_num];
//        return pos;
    }

}
void fill_intervals(){
    for (int i = 1;i<20;i++){
        intervals.push_back((pow(10,i)-1-pow(10,i-1)) * i );
    }
    intervals[0]++;
    prefix.push_back(intervals[0]);
    for (int i = 1;i<20;i++){
        prefix.push_back(prefix[i-1] + intervals[i]) ;
    }

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    fill_intervals();
    int q;
    cin >> q;
    ull k;

    while(q--){
        cin >> k;
        cout << solve(k) << endl;
    }

}