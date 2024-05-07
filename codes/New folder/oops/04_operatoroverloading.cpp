#include<iostream>
using namespace std;
class integer{
    private:
    int x;
    public:
   void set_data(int a)
   {
    x=a;
   }
    integer operator++(){
        integer i;
        i.x=x+1;
        return i;
    }
     integer operator++(int){
        integer i;
        i.x=x++;
        return i;
    }
    void show_data()
    {
        cout<<"x="<<x;
    }

};

int main(){

    integer i1;
    integer i2;
    i1.set_data(20);
    i1.show_data();
    i2=++i1;
    i2.show_data();
    i1.show_data();
}