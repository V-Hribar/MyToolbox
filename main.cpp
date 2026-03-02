/*
** V-HRIBAR PROJECT, 2026
** MyToolbox
** File description:
** 
*/

#include <iostream>
#include "./Mylib/myToolbox.hpp"

int main(void)
{
    std::list<std::string> l = getThisFolder();

    for (std::string obj = l.front(); l.size() != 0; l.pop_front()) {
        std::cout << l.front() << std::endl;
    }
    return 0;
}
