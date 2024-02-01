#include<iostream>
#include"shop.h"
#include"model.h"

namespace shop
{

    
    class Pizza : public abs_shop::Shop
    {
    private :

    public:
        Pizza(std::string &_name, const std::string &_menu_file)
        :abs_shop::Shop(_name,_menu_file){
        }
        /*
        
        virtual bool order_done() = 0; 
        */
        void display_menu() override {
            for (int i = 0 ; i < menu.size() ; i++){
                std::cout<< "<< "<<i+1<<" >> dish : "<<menu[i].product<<"  >> cost : "<<menu[i].price<<" per unit\n";
            }
        }

        void take_order(int product_num, int count) override {
            order.emplace_back(menu[product_num-1] , count);
        }

        void set_order_cost() override {
            for(auto item : order){
                order_cost += item.total_price;
            }
        }

        double get_total_cost()  override {
            return order_cost;
        }
        ~Pizza(){}
    };
    
} // namespace pizza
