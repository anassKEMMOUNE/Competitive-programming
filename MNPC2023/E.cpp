#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
vector<string> possibilities;
vector<string> all_possi;
int to_minutes(const string& a){
    string hour = string(1,a[0]) + string(1,a[1]);
    string minutes = string(1,a[3]) + string(1,a[4]);
    int b = stoi(hour);
    int c = stoi(minutes);
    return b *60 + c;
}
int countCharacter(const std::string& str, char target) {
    int count = 0;

    for (char ch : str) {
        if (ch == target) {
            count++;
        }
    }

    return count;
}
void all_hours(const string& a){
    int hour;
    int minutes;
    string res;
    for (int i = 0;i<1440;i++){
        int push = 0;
         hour =  floor(i/60);
         minutes = i%60;
         if (minutes < 10 && hour >= 10){
             res = to_string(hour) + ":" +"0"+ to_string(minutes);
         }
         else if (minutes < 10 && hour < 10){
             res = "0" + to_string(hour) + ":" +"0"+ to_string(minutes);
         }
         else if ( minutes >= 10 && hour < 10){
             res = "0" + to_string(hour) + ":" + to_string(minutes);
         }
         else {
             res = to_string(hour) + ":" + to_string(minutes);
         }

         for (int j=0;j<5; j++){

             if (a[j]==res[j] || a[j] == '?' ){
                push = 1;
             }
             else {
                 push = 0;
                 break;
             }
}
         if (push){
             all_possi.push_back(res);

         }

         }

    }

void generate_possibilities(const string& a,const string& b) {
    if (countCharacter(a, '?') == 4) {
        possibilities.push_back(b);
    }
    else {
        all_hours(a);
        possibilities = all_possi;
        all_possi.clear();
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    string s;
    cin >> T;

    while (T--) {
        pair<string, string> time;
        for (int t = 0; t < 2; t++) {
            cin >> s;
            if (t == 0) time.first = s;
            else { time.second = s; }
        }
        generate_possibilities(time.first,time.second);
        int r,diff;
        string ans = "0";
        int m = 9999;
        for (const string& i : possibilities){
            r = to_minutes(i);
            diff = min(abs(r- to_minutes(time.second)),abs(-1440+abs(r - to_minutes(time.second))));

            if (diff < m){
               m = diff;
                ans = i;
            }
        }
        cout << ans << endl;

possibilities.clear();
    }
}