#include <bits/stdc++.h>

using namespace std;


int main(){
    int f;
    cin >> f;
    int r;
    int b;
    int suma;

    vector<int> red;
    vector <int> blue;

    for(int i = 0; i < f; i++){
        cin >> r;
        red.push_back(r);
    }

    for(int i = 0; i<f; i++){
        cin >> b;
        blue.push_back(b);
    }

    sort(red.begin(), red.end());
    sort(blue.begin(), blue.end(), greater<int>());

    int fs;
    fs = red[0] + blue[0];
    int max = fs;
    int min = fs;

    for (int i = 1; i < f; i ++){
        suma = red[i] + blue[i];
        if(suma > max){
            max = suma;
        }
        if(suma < min){
            min = suma;
        }
    }

    cout << max - min << endl;
    return 0;
}
