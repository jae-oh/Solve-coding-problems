#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[10];
int input[10];
int isused[10005];

void func(int k);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for(int i=0;i<n;i++)
        cin >> input[i];
    sort(input,input+n);
    
    func(0);
}

void func(int k){
    if(k==m){
        for(int i=0;i<k;i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return ;
    }
    for(int i=0;i<n;i++){
        if(!isused[input[i]]){
            isused[input[i]] = 1;
            arr[k] = input[i];
            func(k+1);
            isused[input[i]] = 0;
        }
    }
}