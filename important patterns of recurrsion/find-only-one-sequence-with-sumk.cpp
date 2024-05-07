//in this we use boolean concept to avoid further recurrsion calls
#include <iostream>
using namespace std;
#include <vector>
bool find(int arr[],int n,int k,int index,int sum,vector<int>& ds ){
    if(index==n){
         if(sum==k){
            for(int i=0;i<ds.size();i++){
                cout<<ds[i]<<" ";
            }
            cout<<endl;
            return 1;
         }
         return 0;
    }
    ds.push_back(arr[index]);
    sum+=arr[index];
    if(find(arr,n,k,index+1,sum,ds)==1){
    return 1;
    }   
    ds.pop_back();
    sum-=arr[index];
    if(find(arr,n,k,index+1,sum,ds)==1)
    return 1;

    return 0;
}
int main(){
    int arr[]={1,2,1};
    int n=3,k=2;
    vector<int> ds;
    bool check=find(arr,n,k,0,0,ds);   
    return -1;

}