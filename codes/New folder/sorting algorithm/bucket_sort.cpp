#include <iostream>
#include <vector>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



// Mainly bucket sort is used to sort arrays with float values
//Time complexity analysis 
//1.best case=O(n)---------- jab diversify ho element har bucket m
// 2.Average case=O(n+k) ----------------------waki sb m same hi ho ek m thode jyada ho 
//3. worst case=O(N^2) -----------------jab pura array ek hi bucket m aajai



void bucketsort(float arr[],int size){
    vector<vector<float>> bucket (size,vector<float> ());

    //1.Finding ki ek bucket kitne range ki hogi
    float mini=arr[0],maxi=arr[0]; 
    for(int i=0;i<size;i++){
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]);
    } 
    float range=(maxi-mini)/size;//size of the bucket

    //3. konse bucket m kon sa element
    for(int i=0;i<size;i++){
        int index=(arr[i]-mini)/range;
        int diff= (arr[i]-mini)/range-index;//boundary element k liye kyuki agr maximum aaga to index size k equal hoga usko normalizing k liye

        if(diff==0&&arr[i]!=mini){
            bucket[index-1].push_back(arr[i]);
        }
        else{
            bucket[index].push_back(arr[i]);
        }
    } 
     
    //3. sorting the particular bucket 
    for(int i=0;i<size;i++){
        if(!bucket[i].empty()&&bucket[i].size()>1){
            sort(bucket[i].begin(),bucket[i].end());
        }
    }
    int k=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<bucket[i].size();j++){
            arr[k]=bucket[i][j];
            k++;
        }
    }     
}

int main(){
    float arr[]={6.13,8.454,0.12,1.89,4.75,2.63,7.85,10.39};
    int size=8;
    bucketsort(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return -1;
}
