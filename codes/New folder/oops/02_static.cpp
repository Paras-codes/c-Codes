#include <iostream>
using namespace std;

class Account{
private:
static float roi;
public:
static void set_roi(float v){  //without static it cant be called without making an object
    roi=v;
}
};
float Account::roi;//alocates the memory to static variable
int main()
{
    // Account::roi=2.3f only when roi is public
    Account::set_roi(3.4);//this way it can be called without making an object

}
