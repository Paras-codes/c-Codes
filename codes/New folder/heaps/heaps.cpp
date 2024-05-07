#include <iostream>
using namespace std;

class Heap {
    public:
    int arr[100];
    int size=0;
    void insertion(int n){
        
        size++;
        arr[size] = n;
        int index=size;
    while(index>1){
        int parent=index/2;
    if(arr[index]>arr[parent]){
        swap(arr[index],arr[index/2]);
    }
    index=parent;
    }

    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    void deletetop(){
        if(size==0)
        return;
        arr[1]=arr[size];
        size--;
        int index=1;
        while(index<=size){
            int leftindex=2*index;
            int rightindex=(2*index)+1;
            if(leftindex<=size&&arr[index]<arr[leftindex])
            {
                swap(arr[index],arr[leftindex]);
                index=leftindex;
            }
            else if(rightindex<=size && arr[index]<arr[rightindex]){
                swap(arr[index],arr[leftindex]);
                index=rightindex;
            }
            else{
                return;
            }
        }

    }
    void heapify(int *st,int n,int i){
      int largest= i;
      int left =2*i;
      int right=(2*i)+1;
      if(left <=n&& st[largest]<st[left]){
        largest= left;
      }
      else if(right<=n && st[largest]<st[right]){
        largest=right;
      }
     if(largest!=i){
        swap(st[i],st[largest]);
        heapify(st,n,largest);    //jisse ki jitti bhi badi ho jai tree niche walo ko bhi adjust karliya jai
     }

    }
    void heap_sort(int *arr,int n){
       int size=n;
        while(size>1){
            swap(arr[1],arr[size]);
            size--;
            heapify(arr,size,1);
        }

    }
};

int main(){
    Heap h;
    h.insertion(80);
    h.insertion(90);
    h.insertion(50);
    h.insertion(40);
    h.insertion(100);
    h.print();
    h.deletetop();
    h.print();
    int arr[6]={-1,55,53,54,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
       h.heapify(arr,5,i);
    }
   for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }cout<<"\n";
    h.heap_sort(arr,n);
     for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }cout<<"\n";


    return 0;
}

