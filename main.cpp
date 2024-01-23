#include<iostream>
#include"customer.h"
#include"fish.h"
#include"pizza.h"

int main(){

    
    pizza::Pizza* pizza;
    fish::Fish fish;
    customer::Customer cust(pizza);
    cust.display_menu();
}