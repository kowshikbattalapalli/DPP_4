#include<bits/stdc++.h>
using namespace std;
int solve(int n,int f){
    if(n==1 or f==0 or f==1){
        return f;
    }
    int temp,ans=INT_MAX;
    for(int k=1;k<=f;k++){
        temp=max(solve(n-1,k-1),solve(n,f-k))+1;
        ans=min(ans,temp);
    }
    return ans;
}
int main(){
    int n,f;
    cout<<"Enter the Number of eggs and floors:"<<endl;
    cin>>n>>f;
    int ans=solve(n,f);
    cout<<ans<<endl;
    return 0;
}

