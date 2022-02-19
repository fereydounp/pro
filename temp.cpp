#include <iostream>
#include <string>
using namespace std ;
template <typename T >
T swap (T first , T secound ){
    T rep ;
    rep = first ;
    T rep2 ;
    rep2 = secound ;
    return (rep2,rep);
};

int main (){
    int a,b;
    std :: cout << a << "and the b is " << b << std :: endl ;
    a , b = swap(8,50);
    std :: cout << a << "and the b is " << b << std :: endl ;
    return 0 ;
}