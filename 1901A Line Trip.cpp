#include <iostream>
#include <vector>
using namespace std;


void Solve(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> array1(n+2);
        array1[0] = 0;
        array1[n+1] = x;

        for(int i = 1; i <= n; ++i){
            cin >> array1[i];
        }


        //Now taking the difference of them in another array
        vector<int> array2(n+1);
        for(int i = 0; i< n+1; ++i){
            array2[i] = array1[i+1] - array1[i];

        }
        array2[n] *= 2;

        int max = array2[0];
        for (int i = 1; i < n+1; ++i){
            if(array2[i] > max){
                max = array2[i];
            }
        }
        cout << max << endl;




    }
}

int main(){
    Solve();
    return 0;
}
