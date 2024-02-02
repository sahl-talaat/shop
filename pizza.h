#include<iostream>
#include"shop.h"
#include"model.h"
#include"reus_code.h"

namespace shop
{

    
    class Pizza : public abs_shop::Shop
    {
    private :

    public:
        Pizza(std::string _name):abs_shop::Shop(_name){}
    // virtual void set_menu(std::string &_menu_file) 
        void set_menu(const std::string &_menu_file) override{
            try
            {
                menu = UI::loadMenuFromFile(_menu_file);
                if (menu.empty()){
                    menu.emplace_back("special_order",0.0);
                    throw "load menu data faild";
                }
            }
            catch(char* msg)
            {
                std::cerr << msg << '\n';
            }
        }
        
        void display_menu() override {
            for (int i = 0 ; i < menu.size() ; i++){
                std::cout<< "<< "<<i+1<<" >> dish : "<<menu[i].product<<"  >> cost : "<<menu[i].price<<" per unit\n";
            }
        }

        void display_order() override {
            for (int i = 0 ; i < order.size() ; i++){
                std::cout<< "<< "<<i+1<<" >> dish : "<<order[i].menu.product<<"  >> cost : "<<order[i].total_price<<" per "<<order[i].count<<std::endl;
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
            return (order_cost + (order_cost * 0.14));
        }
        ~Pizza(){}
    };
    
} // namespace pizza
