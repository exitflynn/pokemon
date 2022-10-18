#include <iostream>
using namespace std;

int hacke[100];
int hacko[100];
int esize=0;
int osize=0;

void hackzero(){
    for(int i=0;i<100;i++){
        hacke[i]=-1;
        hacko[i]=-1;
    }
}

long long int addvalue(long long int A[],int x,int c,int n){
    long long int sum=0;
    long long int sum1=0;
    if(c==0){
        for(int i=0,j=n;i<n;i++,j--){
            if(A[i]%2==0){
                A[i]=A[i]+x;
            }

            if(A[j]%2==0){
                A[j]=A[j]+x;
            }

            if(j<=i){
                break;
            }
            sum=sum+A[i];
            sum1=sum1+A[j];
        }
    }

    else if(c==1){
        for(int i=0,j=n;i<n;i++,j--){
            if(A[i]%2!=0){
                A[i]=A[i]+x;
            }
            if(A[j]%2!=0){
                A[j]=A[j]+x;
            }
            if(j<=i){
                break;
            }
            sum=sum+A[i];
            sum1=sum1+A[j];
        }
    }
    return sum+sum1;
}

void solve(){
    int n;
    cin>>n;
    int q;
    cin>>q;

    long long A[n];

    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    long long int sum=0;
    for(int i=0;i<q;i++){
        int c;
        cin>>c;
        int z;
        cin>>z;

        sum=addvalue(A,z,c,n);
        cout<<sum<<endl;
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
