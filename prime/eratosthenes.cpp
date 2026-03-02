#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<bool> eratos(n + 1, true);
    eratos[0] = eratos[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (eratos[i]) {
            for (int j = i * i; j <= n; j += i) {
                eratos[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (eratos[i]) {
            cout << i << " ";
        }
    }

    return 0;
}