#include<bits/stdc++.h>
using namespace std;
int solve(int wt[],int val[],int n,int W){
    int res=INT_MIN;
    if(n==0){
        return 0;
    }
        if(wt[n]<=W){
            int included=val[n]+solve(wt,val,n-1,W-wt[n]);
            int unincluded=solve(wt,val,n-1,W);
            res=max(included,unincluded);
        }
        else{
            solve(wt,val,n-1,W);
        }
    return res;
}
int main(){
    int n;
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;
    int wt[n],val[n];
    cout<<"Enter the weights:"<<endl;
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    cout<<"Enter the values:"<<endl;
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    cout<<"Enter the Weight:"<<endl;
    int W;
    cin>>W;
    int ans=solve(wt,val,n-1,W);
    cout<<"resultant values we can carry in bag:"<<ans<<endl;
    return 0;
}
