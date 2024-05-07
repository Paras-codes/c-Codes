#include<iostream>
using namespace std;
class sample{
    int s;
    int t;
    public:
     sample(int s,int b){
        this->s=s;
        t=b;

     }

    void print(){
        cout << s<<" " <<t;

    }

    ~sample(){
        cout<<" destructor called"<<" ";
    }
};

int main(){
try
{
    /* code */
    // sample *st=new sample(2,4);
    sample st(2,4);
    st.print();
}
catch(const exception& e)
{
    cerr << e.what() << '\n';
}

return -1;

}