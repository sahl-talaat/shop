#include<iostream>
#include"shop.h"
#include"reus_code.h"   

namespace cleint
{
    class Cleint
    {
    private:
        abs_shop::Shop *choosen;
    public:
        Cleint(abs_shop::Shop *choosen){
            this->choosen = choosen;
        }
        void operation(){
            
            choosen->display_menu();
            std::cout<<"enter product num = 0 to finish order\n";
            // choosen->take_order() inside func below 'UI::take_order_viewed_for_user(choosen)'
            UI::take_order_viewed_for_user(choosen);
            choosen->set_order_cost();
            choosen->display_order();
            choosen->get_total_cost();
        }
    };
    
    
} // namespace cleint
