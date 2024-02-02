#include<iostream>
#include"shop.h"
#include"fish.h"
#include"pizza.h"
#include"cleint.h"

int main(){

    //abs_shop::Shop* shop_ptr = new shop::Pizza;
    std::string pizza_name = "pizza", fish_name = "fish", fish_menu = "fish_menu.txt", pizza_menu = "pizza_menu.txt";
    shop::Pizza  pizza(pizza_name, pizza_menu);
    shop::Fish fish(pizza_name, pizza_menu);
    abs_shop::Shop *shop = &pizza;
    cleint::Cleint cleint;
    cleint.operation(shop);






    /* 
    shop::Pizza* pizza();
    shop::Fish fish();
    customer::Customer cust();
    cust.display_menu(); */

   // display_menue 
   
   // take_order
   // operation 
}