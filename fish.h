#include<iostream>
#include"shop.h"
#include"const_variable.h"
using namespace std;

namespace fish
{

    class Fish : abs_shop::Shop
    {
    protected:
        /* data */
    public:
        Fish(/* args */):Shop(){
            shop_name = variable::fish_shop;
            for(int i = 0 ; i < variable::fish_menu->length()-1 ; i++){
                this->menu[i] = variable::fish_menu[i];
                this->menu_price[i] = variable::fish_price[i];
            }
        }
        void display_menu(){
            cout<<"[";
            for(int i = 0 ; i < menu->length() ; i++){
                cout<<i+1<<menu[i]<<" : "<<menu_price[i]<<"\t";
            }
            cout<<"]\n";
        }
        void take_order(){
            display_menu();
        }
        bool order_done(){} 
        void order_price(){}
        ~Fish(){}
    };
    
} // namespace fish
