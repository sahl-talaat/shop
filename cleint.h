#include<iostream>
#include"shop.h"
#include"reus_code.h"   

namespace cleint
{
    class Cleint
    {
    public:
        void operation(abs_shop::Shop *choosen){
            choosen->display_menu();
            std::cout<<"enter product num = 0 to finish order\n";
            UI::take_order(choosen);
            choosen->set_order_cost();
            choosen->display_order();
            std::cout<<"\t Total cost = "<<choosen->get_total_cost()<<std::endl;
        }
    };
    
    
} // namespace cleint
