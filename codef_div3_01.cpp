#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int solve(){
    int n;
    cin>>n;
    string s;
    int a[n+1];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>s;


    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;

    // for(int i=0;i<n;i++){
    //     cout<<s[i]<<" ";
    // }
    // cout<<endl;

    // return 0;



    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]==a[j]){
                if(s[i]!=s[j]){
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;

}


int main(){

    int N;
    cin>>N;
    while(N){
        solve();
        N--;
    }
    return 0;
}
