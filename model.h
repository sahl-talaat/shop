#include<iostream>


#ifndef MODEL
#define MODEL 

namespace model
{
    struct Menu
    {
        std::string product;
        double price;
        Menu(){}
        Menu(std::string _product, double _price){
            this->product = _product;
            this->price = _price;
        }
    };

    struct Order
    {
        Menu menu;
        int count;
        double total_price;
        Order(Menu _menu, int _product_count){
            this->menu = _menu;
            this->count = _product_count;
            this->total_price = (_menu.price * _product_count);
        }
    };
    
} // namespace model

#endif
