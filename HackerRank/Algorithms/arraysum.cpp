#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int sum = 0;
    cin >> n;
    vector<int> arr(n); 
    /* simple array like int arr[n] will be just fine too. */
    
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       sum = sum + arr[arr_i];
    }
    cout<<sum;
    return 0;
}