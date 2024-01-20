#include<iostream>
#include"shop.h"
#include"const_variable.h"

namespace pizza
{
    class Pizza : public abs_shop::Shop
    {
    protected:
        /* data */
    public:
        Pizza(/* args */){
            this->shop_name = variable::pizza_shop;
            for(int i = 0 ; i < variable::pizza_menu->length()-1 ; i++){
                this->menu[i] = variable::pizza_menu[i];
            }
        }
        void display_menu(){
            for(int i = 0 ; i < menu->length() ; i++){
                cout<<"["<<menu[i]<<"\t";
            }
            cout<<"]\n";
        }

        void take_order(){
            display_menu();
        }
        bool order_done(){} 
        void order_price(){}
        ~Pizza(){}
    };
    
} // namespace pizza
