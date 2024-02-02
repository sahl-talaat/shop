#include<iostream>
#include"shop.h"
#include"fish.h"
#include"pizza.h"
#include"cleint.h"

int main(){

    shop::Pizza  pizza("pizza");
    shop::Fish fish("fish");

    pizza.set_menu("pizza_menu.txt");
    fish.set_menu("fish_menu.txt");

    abs_shop::Shop *shop = &pizza;
    cleint::Cleint cleint(shop);
    cleint.operation();
    std::cout<<"\ttotal cost for order = "<<shop->get_total_cost()<<" $\n";


}