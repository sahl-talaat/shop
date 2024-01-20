#include<iostream>
#include"pizza.h"
#include"fish.h"
using namespace std;

namespace customer
{
    class Customer : public pizza::Pizza, public fish::Fish
    {
    private:
        std::string cust_name;
        double discound;
        
    public:
        Customer(/* args */){
            
        }
        void display_menu(){
            int chose{};
            cout<<"take order\n";
            cout<<"1. PIZAA\t2.FISH\n";
            if (chose == 1)
                Pizza::display_menu();
            else if (chose == 2)
                Fish::display_menu();
            else
                return;
        }

        void take_order(){
            display_menu();
        }
        bool order_done(){} 
        void order_price(){}
        ~Customer(){}
    };
    
} // namespace Customer
