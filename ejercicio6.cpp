#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> v {{1, 2}, {3, 4}, {5, 6}};
    for (auto a : v) {
        for (auto i : a) {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}



