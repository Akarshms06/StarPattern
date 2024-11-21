#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int sp=1;sp<=n-i;sp++){
            cout<<" ";
        }
        for(int st=1;st<=2*i-1;st++){
              cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int sp=1;sp<=n-i;sp++){
            cout<<" ";
        }
        for(int st=1;st<=2*i-1;st++){
            cout<<"*";
        }
        cout<<endl;
    }
}
