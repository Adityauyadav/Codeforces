#include <iostream>
#include <vector>
using namespace std;

void turtlePuzzle(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++){
            if(arr[i] >= 0 ) {
            sum += arr[i];
            }
            else {
                sum += (arr[i] * -1);

        }
        
        }
        cout << sum << endl;
    }
}

int main(){
    turtlePuzzle();
    return 0;
}