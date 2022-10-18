#include <iostream>
using namespace std;


int fact(int n);
 
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 

int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}


void solve(){
    int n;
    cin>>n;


    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
    }

    if(n==8){
        cout<<"6"<<endl;
    }
    else if(n==9 || n==10){
        cout<<0<<endl;
    }
    else{
        cout<<6*nCr(10-n,2)<<endl;
    }


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
