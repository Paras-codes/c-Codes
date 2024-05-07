//Intution
// straight forward intution regarding this is that we will examine that how much count of satisfied condition does we get by the cases and then union them

//template
/*
fuction{

   if(basecase){
    if(condition satisfied)
    return 1;
    else
    return 0;
   }

   l=cases1call;
   r=case2call;

   return l+r;
}
*/

#include <iostream>
using namespace std;
#include <vector>
int find(int arr[],int n,int k,int index,int sum){
    if(index==n){
         if(sum==k) return 1;
         else return 0;
    }
  
    sum+=arr[index];
    int pick =find(arr,n,k,index+1,sum);

    sum-=arr[index];
    int notpick=find(arr,n,k,index+1,sum);

    return pick+notpick;
}
int main(){
    int arr[]={1,2,1};
    int n=3,k=2;
    
    int cnt=find(arr,n,k,0,0);

    cout<<cnt;
    
    return -1;

}