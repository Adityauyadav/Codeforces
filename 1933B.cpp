#include <iostream>
#include <vector>
using namespace std;


bool divisibilityChecker(const vector<int>& arr) {
    int totalSum = 0;
    for (int num : arr) {
        totalSum += num;
    }
    for (int i = 0; i < arr.size(); ++i) {
        int sumWC = totalSum - arr[i];
        if (sumWC % 3 == 0) {
            return true;
        }
    }
    return false;
}


void turtleMath(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += (arr[i]);
        }
        if(sum % 3 == 0){
            cout << 0 << endl;
        }
        else{
            if(divisibilityChecker(arr) or ((sum+1)%3 == 0)){
                cout << 1 << endl;
            }
            else{
                cout << 2 << endl;
                
            }
            

        }

    }
}

int main(){
    turtleMath();
    return 0;
}