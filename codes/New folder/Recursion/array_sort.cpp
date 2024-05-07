#include <iostream>
#include <vector>
using namespace std;
void insert(vector<int>& v,int n,int a){
    if(n==0||a>v[n-1]){
      v[n]=a;
      return;
    }
    int t=v[n-1];
    v.pop_back();
    insert(v,n-1,a);
    v[n]=t;

}
void sort_array(vector<int>& v,int n){
    if(n==1){
        return;
    }
    int a=v[n-1];
    v.pop_back();
    sort_array(v,n-1);
    insert(v,n-1,a);
}
int main(){
    stack <int> v={1,0,0,5,2};
    int n=5;
    sort_array(v,n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
// #include <iostream>
// #include <vector>
// using namespace std;

// void insert(vector<int>& v, int n, int key) {
//     if (n <= 0 || v[n-1] <= key) {
//         v[n] = key;
//         return;
//     }
//     int temp = v[n-1];
//     insert(v, n-1, key);
//     v[n] = temp;
// }

// void sort_array(vector<int>& v, int n) {
//     if (n <= 1) return;
//     int a = v[n-1];
//     v.pop_back();
//     sort_array(v, n-1);
//     insert(v, n-1, a);
// }

// int main() {
//     vector<int> v = {1, 0, 0, 5, 2};
//     int n = v.size();
//     sort_array(v, n);
//     for(int i = 0; i < n; i++) {
//         cout << v[i] << " ";
//     }
//     return 0;
// }