#include<bits/stdc++.h>
using namespace std;
int solve_mcm(int arr[],int i,int j){
    if(i==j){
        return 0;
    }
    int temp;
    int ans=INT_MAX;
    for(int k=i;k<j;k++){
        temp=solve_mcm(arr,i,k)+solve_mcm(arr,k+1,j)+(arr[i-1]*arr[k]*arr[j]);
        ans=min(ans,temp);
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the array length:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter all integers of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=solve_mcm(arr,1,n-1);
    cout<<"matrix chain multiplication of given array:"<<res<<endl;
    return 0;
}
