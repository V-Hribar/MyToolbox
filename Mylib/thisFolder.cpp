/*
** V-HRIBAR PROJECT, 2026
** MyToolbox
** File description:
** 
*/

#include "myToolbox.hpp"

void showThisFolder(void)
{
    for (const auto & entry : std::filesystem::directory_iterator("./"))
        std::cout << entry.path() << std::endl; 
}

std::list<std::string> getThisFolder(void)
{
    std::list<std::string> l;
    for (const auto & entry : std::filesystem::directory_iterator("./"))
        l.push_front(entry.path());
    return l;
}
