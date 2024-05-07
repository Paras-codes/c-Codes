#include <iostream>
using namespace std;
#include <vector>
void find(int arr[],int n,int k,int index,int sum,vector<int>& ds ){
    if(index==n){
         if(sum==k){
            for(int i=0;i<ds.size();i++){
                cout<<ds[i]<<" ";
            }
            cout<<endl;
         }
         return;
    }
    ds.push_back(arr[index]);
    sum+=arr[index];
    find(arr,n,k,index+1,sum,ds);
    ds.pop_back();
    sum-=arr[index];
    find(arr,n,k,index+1,sum,ds);
}
int main(){
    int arr[]={1,2,1};
    int n=3,k=2;
    vector<int> ds;
    find(arr,n,k,0,0,ds);
    
    return -1;

}