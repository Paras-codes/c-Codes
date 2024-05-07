#include<conio.h>
#include<iostream>
using namespace std;
//object ki state hamesa function se change hone chahiye 
class complex{
    private:
    int a,b;//instance member variable 
    public:
    void set_val(int a1,int b1){//instance member func 
        a=a1;
        b=b1;
    }
    void show_data(){
        cout<<"a="<<a<<" "<<"b="<<b;
    }
    complex add(complex c){
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;//they can easily acess private member as they belongs to same class
        return temp;
    }
};

int main(){
    complex c1;
    c1.set_val(3,4);
    complex c2;
    c2.set_val(5,6);
    complex c3;
    c3=c1.add(c2);
    c3.show_data();

    // c1.show_data();
}