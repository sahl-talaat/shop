#include<iostream>
#include"shop.h"
#include"fish.h"
#include"pizza.h"

int main(){

    //abs_shop::Shop* shop_ptr = new shop::Pizza;
    std::string pizza_name = "pizza", fish_name = "fish", fish_menu = "fish_menu.txt", pizza_menu = "pizza_menu.txt";
    shop::Pizza pizza(pizza_name, pizza_menu);

    pizza.display_menu();
    while (1) {
        int count; 
        int product_num;
        std::cout<< "product_num : ";
        std::cin>>product_num;
        if (product_num == 0)
            break;
        std::cout<< "count : ";
        std::cin>>count;
        pizza.take_order(product_num,count);
    }
    
    pizza.set_order_cost();

    pizza.display_order();
    std::cout<<"\t Total cost = "<<pizza.get_total_cost()<<std::endl;




    /* 
    shop::Pizza* pizza();
    shop::Fish fish();
    customer::Customer cust();
    cust.display_menu(); */

   // display_menue 
   
   // take_order
   // operation 
}