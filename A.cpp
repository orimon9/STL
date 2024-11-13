#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<tuple<int, int, int>> triples;


    for (int x = 0; x <= N; x++) {
        for (int y = 0; y <= N; y++) {
            for (int z = 0; z <= N; z++) {
                if (x + y + z <= N) {
                    triples.emplace_back(x, y, z);
                }
            }
        }
    }


    sort(triples.begin(), triples.end());

    for (const auto &triple : triples) {
        int x, y, z;
        tie(x, y, z) = triple;
        cout << x << " " << y << " " << z << endl;
    }

    return 0;
}
