#include<iostream>
#include"shop.h"
using namespace std;

namespace customer
{
    class Customer
    {
    private:
        abs_shop::Shop* chosen_shop;
        
    public:
        Customer(abs_shop::Shop* shop):chosen_shop(shop){
            
        }
        void display_menu(){
            chosen_shop->display_menu();
        }

        void take_order(){
            display_menu();
        }
        bool order_done(){
            return 1;
        } 
        void order_price(){}
        ~Customer(){}
    };
    
} // namespace Customer
