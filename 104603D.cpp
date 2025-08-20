#include <bits/stdc++.h>

using namespace std;

bool concurso(int x, int k, const vector<int>& c, const vector<int>& p){
    long long s = 0;
    for(int i = 0; i < k; i++){
        s += p[i] - c[i]*x;
        if(s < 0) return false;
    }
    return true;
}


int main(){
    int k;
    cin >> k;

    int c;
    vector<int> cproblems(k);
    vector<int> pproblems(k);

    for(int i = 0; i < k; i++){
        cin >> c;
        cproblems[i] = c;
    }

    for(int i = 0; i < k; i++){
        cin >> c;
        pproblems[i] = c;
    }

    long long low = 0;
    long long mid;
    long long high;
    high = pproblems[0] / cproblems[0] + 1;
    while(low < high){
        mid = (low + high + 1) / 2;
        if(concurso(mid, k, cproblems, pproblems)){
            low = mid;
        }
        else {
            high = mid - 1;
        }
    }

    cout << low << endl;
}