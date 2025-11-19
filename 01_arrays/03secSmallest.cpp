#include <bits/stdc++.h>
using namespace std;

void secSmallest(int arr[], int n){
    int small = INT_MAX;
    int secSmall = INT_MAX;
    for(int i = 0;i<n;i++){
        if(arr[i]<small )
        {
            secSmall = small;
            small = arr[i];
        }
        else if(arr[i]<secSmall && arr[i]>small)
        {
            secSmall = arr[i];
        }
    }
    cout<<secSmall;
}

int main(){
    int arr[] = {2,43,55,66,45,65,34,2,43};
    int n = sizeof(arr)/sizeof(arr[0]);
    secSmallest(arr,n);
}