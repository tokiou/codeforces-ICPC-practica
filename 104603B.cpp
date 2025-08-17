#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    char c;
    cin >> n;
    int cont_total = 0;
    int cont_temp = 0;

    for(int k = 0; k < n; k++){
        cont_temp = 0;
        for(int i = 0; i < n; i++){
            cin >> c;
            if(c == 'N'){
                cont_temp += 1;
                if(cont_temp == 2){
                    cont_total += 1;
                    cont_temp = 0;
                }
            }
            else{
                cont_temp = 0;
            }
        }
    }

    cout << cont_total << endl;

}