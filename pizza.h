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
        Pizza(){
            this->shop_name = variable::pizza_shop;
            for (int i = 0 ; i < variable::pizza_menu->size()-1 ; i++){
                Shop::add_to_menu(variable::pizza_menu[i],variable::pizza_price[i]);
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
        ~Pizza(){}
    };
    
} // namespace pizza
