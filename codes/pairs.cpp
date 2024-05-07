#include <iostream>
using namespace std;

int prime(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    cout<<n;
    return 1;
}