#include<iostream>
#include<vector>
#include"model.h"
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
        Shop(std::string &_name)
        :name(_name),order_cost(0){
           
        }
        
        virtual void display_menu() = 0;
        virtual void display_order() = 0;
        virtual void take_order(int product_num, int count) = 0;
        virtual void set_order_cost() = 0;
         virtual double get_total_cost() = 0; 
        virtual ~Shop(){}
    };
} // namespace abs_shop
#endif // 