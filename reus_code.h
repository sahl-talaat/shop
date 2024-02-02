#include<iostream>
#include<fstream>
#include<vector>
#include"shop.h"
#include"model.h"



#ifndef UI
#define UI

namespace UI
{
    std::vector<model::Menu> loadMenuFromFile(const std::string& filename) {
    std::vector<model::Menu> menu;
    std::ifstream file(filename);
    if (file.is_open()){
        std::string product;
        double price;
        while (file >> product >> price) {
            menu.emplace_back(product,price);
        }
        file.close();
    }
    return menu;
    }

    void take_order_viewed_for_user(abs_shop::Shop *choosen){
         while (1) {
            int count; 
            int product_num;
            std::cout<< "product_num : ";
            std::cin>>product_num;
            if (product_num == 0)
                break;
            std::cout<< "count : ";
            std::cin>>count;
            choosen->take_order(product_num,count);
        }
    }

} // namespace code

#endif