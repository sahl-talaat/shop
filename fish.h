#include<iostream>
#include"shop.h"
using namespace std;

namespace shop
{

    class Fish : abs_shop::Shop
    {
    protected:
        /* data */
    public:
        
        Fish(std::string &_name,  const std::string &menu_file)
        :abs_shop::Shop(_name,menu_file){

        }

        void display_menu() override {
            for (int i = 0 ; i < menu.size() ; i++){
                std::cout<< "<< "<<i+1<<" >> dish : "<<menu[i].product<<"  >> cost : "<<menu[i].price<<" per unit\n";
            }
        }

        void take_order(model::Menu menu, int count) override {
            order.emplace_back(menu , count);
        }

        void set_order_cost() override {
            for(auto item : order){
                order_cost += item.total_price;
            }
        }

        double get_total_cost()  override {
            return order_cost;
        }
        ~Fish(){}
    };
    
} // namespace fish
