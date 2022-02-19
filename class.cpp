#include <iostream>
#include <string>
using namespace std ;
class car {
    private :
        int yearm ;
        int price ;
        string owner_name ;
    public :
        car(int y, int p , string n ):yearm(y),price(p),owner_name(n){};
        void show_info();
};
void car :: show_info(){
    std :: cout << "the information of your car is : " << endl ;
    cout << "year is : " << yearm << "\n";
    cout << "the price of your car is : " << price << " $ \n " ;
    cout << "the owner name is : " << owner_name << "\n" ;
};
int main (){
    car parsa(1998,2800,"parsa veji") ;
    parsa.show_info();
    return 0 ;
}