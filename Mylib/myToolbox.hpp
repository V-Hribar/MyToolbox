#ifdef MYTOOLBOX_HPP_
    #define MYTOOLBOX_HPP_ __declspec(dllexport)
    #else
    #define MYTOOLBOX_HPP_
    #include <string>
    #include <iostream>
    #include <filesystem>
    #include <list>

void showThisFolder(void);
std::list<std::string> getThisFolder(void);

#endif // MYTOOLBOX_HPP_