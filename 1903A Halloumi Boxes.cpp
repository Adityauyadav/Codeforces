#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Solve(){
    int t;
    cin >> t;
    while(t--){
        int  n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) {
            cin >> a[i];

        }
        if(is_sorted(a.begin(), a.end())){
            cout << "YES" << endl;
            }

        else if( k == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    
}



int main(){
    Solve();
    return 0;
}