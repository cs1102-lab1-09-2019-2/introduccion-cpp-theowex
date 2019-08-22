#include <iostream>
#include <vector>

using std::cout;

int main() {

    std::vector<int> a {1, 2, 3, 4, 5};
    for (auto i : a) {
        cout<<i<<"\n";
    }
}
