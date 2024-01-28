#include<iostream>
#include<vector>
#include"model.h"
#include"reus_code.h"
using namespace std;

#ifndef SHOP
#define SHOP

namespace abs_shop
{   

    class Shop
    {
    protected:
        std::string name;
        std::vector<model::Menu> menu;
        std::vector<model::Order> order;
        double order_cost;
    public:
        Shop(std::string &_name, const std::string &menu_file)
        :name(_name),order_cost(0){
            try
            {
                menu = UI::loadMenuFromFile(menu_file);
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            
        }
        
        virtual void display_menu() = 0;
        virtual void take_order(model::Menu menu, int count) = 0;
        virtual void set_order_cost() = 0;
         virtual double get_total_cost() = 0; 
        virtual ~Shop(){}
    };
} // namespace abs_shop
#endif // 