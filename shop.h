#include<iostream>
#include<vector>
using namespace std;

#ifndef SHOP
#define SHOP

namespace abs_shop
{
    class Shop
    {
    protected:
        std::string shop_name;
        std::vector<std::pair<string, double>> shop_menu;
    public:
        Shop(){}
        void add_to_menu(const std::string product, double price){
            shop_menu.push_back({product,price});
        }
        virtual void display_menu() = 0;
        virtual void take_order() = 0;
        virtual bool order_done() = 0; 
        virtual void order_price() = 0;
        virtual ~Shop(){}
    };
} // namespace abs_shop
#endif // 