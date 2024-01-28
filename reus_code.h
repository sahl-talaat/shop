#include<iostream>
#include<fstream>
#include<vector>
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

} // namespace code

#endif