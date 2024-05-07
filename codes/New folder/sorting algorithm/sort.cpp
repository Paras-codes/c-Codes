//sorting usually have an inbuilt function that work it a desirable ways return type is false 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int> x,pair<int,int> y){
    return x>y;
}
int main(){
    vector<pair<int,int>> v={{2,4},{8,4},{3,6}};
    sort(v.begin(),v.end(),cmp);

    for(auto i:v){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return -1;

}
