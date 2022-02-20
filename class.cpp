#include <iostream>
#include <string>
using namespace std ;
template <typename T >
class number {
    T num ;
    public :
        number(T n) : num(n) {};
        void show ();
};
template <typename T >
void number <T> :: show (){
    cout << "the number is " << num << endl ;
};


int main (){
    number <int> numberrrr (6);
    number <float> floatn (5.4f);
    numberrrr.show();
    floatn.show();
    return 0 ;
}