#include <iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        currSum += a[i];
        if(currSum < 0){
            currSum = 0;
        }
        maxSum = max(maxSum,currSum);
    }
    cout << maxSum << endl;

    return 0;
}