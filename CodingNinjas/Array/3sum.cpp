#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	
    vector<vector<int>> ans;
    int N = arr.size();
    sort(arr.begin(), arr.end());

    for(int i = 0; i < N-2; i++){
        if(i > 0 && arr[i]==arr[i-1]){
            continue;
        }
        int left = i+1;
        int right = N-1;
        while(left < right){
            int sum = arr[i]+ arr[left] + arr[right];
            if(sum == K){
                ans.push_back({arr[i], arr[left], arr[right]});
                while(left < right && arr[left] == arr[left+1]){
                    left++;
                }
                while(left < right && arr[right] == arr[right-1]){
                    right--;
                }
                left++;
                right--;
            }else if(sum < K){
                left++;
            }else{
                right--;
            }
        }
    }
    return ans;
}
