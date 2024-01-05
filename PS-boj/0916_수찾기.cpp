#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(const vector<int>& arr, int target){
    int left = 0;
    int right = arr.size() - 1;

    while (left<=right){
        int mid = (left+right)/2;

        if(arr[mid]==target){
            return 1;
        } else if(arr[mid]<target){
            left = mid+1;
        } else{
            right = mid -1;
        }
    }
    return 0;
}

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;

    vector<int> arr(N);
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());

    int M;
    cin>>M;

    for(int i=0; i<M; i++){
        int target;
        cin>>target;
        cout<<binarySearch(arr, target)<<"\n";
    }

    return 0;
}