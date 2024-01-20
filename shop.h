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
        string shop_name;
        string shop_address;
        string menu[5];
        double menu_price[5];
        std::vector<std::vector<std::pair<string, int>>> order_list;
        double price;
    public:
        Shop(){}
        virtual void display_menu() = 0;
        virtual void take_order() = 0;
        virtual bool order_done() = 0; 
        virtual void order_price() = 0;
        virtual ~Shop(){}
    };
    
    
    
} // namespace abs_shop
#endif // 