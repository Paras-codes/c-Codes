#include<vector>
#include<iostream>
using namespace std;

void sumequaltok(int arr[],int n,int i,int sum,int k,vector<int> v){
if(i==n){
    if(sum==k){
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<"\n";
    }
    return;
}
v.push_back(arr[i]);
sum+=arr[i];
sumequaltok(arr,n,i+1,sum,k,v);
if(!v.empty())
v.pop_back();
sum-=arr[i];
sumequaltok(arr,n,i+1,sum,k,v);

}
int main(){
    int arr[]={1,2,1};
    int n=3;
    vector<int> v;
    sumequaltok(arr,n,0,0,2,v);
         
}