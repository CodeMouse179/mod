#include "system.hpp"
#include <iostream>

int main()
{
#ifdef SYSTEM_WINDOWS
    std::cout << "Windows\n";
#endif
#ifdef SYSTEM_LINUX
    std::cout << "Linux\n";
#endif
#ifdef SYSTEM_MACOS
    std::cout << "macOS\n";
#endif
#ifdef SYSTEM_POSIX
    std::cout << "POSIX\n";
#endif
    return 0;
}