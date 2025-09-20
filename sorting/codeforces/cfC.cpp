#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> sequence(n);
    for(int i = 0; i < n; i++) {
        cin >> sequence[i];
    }
    sort(sequence.begin(), sequence.end());

    if(k == 0){
        if(sequence[0] == 1) cout << -1;
        else cout << sequence[0] - 1;
        return 0; 
    }

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(sequence[i] <= sequence[k - 1]) {
            cnt++;
        }
    }

    if(cnt == k) {
        cout << sequence[k - 1];
    } else {
        cout << -1;
    }

    return 0;
}
