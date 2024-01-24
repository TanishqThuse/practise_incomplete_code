#include <iostream>
#include <vector>
using namespace std;

vector<int> encryptRow(int n, string &colour) {
    vector<int> groups;
    int consecutiveBlacks = 0;

    for (int i = 0; i < n; i++) {
        if (colour[i] == 'B') {
            consecutiveBlacks++;
        } else if (consecutiveBlacks > 0) {
            groups.push_back(consecutiveBlacks);
            consecutiveBlacks = 0;
        }
    }

    if (consecutiveBlacks > 0) {
        groups.push_back(consecutiveBlacks);
    }

    return groups;
}

int main() {
    int n;
    cin >> n;

    string colour;
    cin >> colour;

    vector<int> groups = encryptRow(n, colour);

    // Output the number of groups
    cout << groups.size() << endl;

    // Output the sizes of consecutive black squares in the order from left to right
    for (int i = 0; i < groups.size(); i++) {
        cout << groups[i] << " ";
    }

    return 0;
}
