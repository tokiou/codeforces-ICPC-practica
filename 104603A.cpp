#include <bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int m;
    int a;

    cin >> n >> m;

    priority_queue<std::pair<int, int>> t;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        t.push({x, i});
    }


    for(int i = 0; i < m; i++){
        int e;
        cin >> e;
        while(t.top().first >= e){
            auto [a, k] = t.top();
            t.pop();
            t.push({a % e, k});
        }
    }

    vector<int> results(n);

    while(!t.empty()){
        results[t.top().second] = t.top().first;
        t.pop();
    }

    for(int x: results){
        cout << x << " ";
    }
    cout << endl;

    return 0;

}