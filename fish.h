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
        Fish(){
            this->shop_name = variable::fish_shop;
            for (int i = 0 ; i < variable::fish_menu->size()-1 ; i++){
                Shop::add_to_menu(variable::fish_menu[i],variable::fish_price[i]);
            }
        }
        void display_menu(){
            std::cout << "Menu for " << shop_name << ":" << std::endl;
            for (const auto& item : shop_menu) {
                std::cout << item.first << " - $" << item.second << std::endl;
            }
        }
        void take_order(){
            display_menu();
        }
        bool order_done(){
            return 1;
        } 
        void order_price(){}
        ~Fish(){}
    };
    
} // namespace fish
