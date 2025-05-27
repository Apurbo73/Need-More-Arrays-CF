#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int last = -1e9; 
        int arrays = 0;

        for (int i = 0; i < n; ++i) {
            if (a[i] > last + 1) {
                arrays++;
                last = a[i];
            } else {
               
            }
        }

        cout << arrays << "\n";
    }

    return 0;
}
