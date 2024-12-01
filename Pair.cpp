#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    map < pair <int, int>, int > cnt;
    for (int i = 0, _class, roll; i < n; i++) {
        cin >> _class >> roll;
        cnt[make_pair(_class, roll)]++;
    }
    for (auto currStudent : cnt) {
        cout << "Class = " << currStudent.first.first << " Roll = " << currStudent.first.second << " Count = " << currStudent.second << endl;
    }
return 0;
}
