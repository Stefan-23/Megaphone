#include <iostream>
#include <cstring>

void megaphone(char* str);

int main()
{
    std::cout << "Speak with megaphone: ";
    char str[80];
    std::cin.getline(str, 80);
   

    megaphone(str);
    std::cout << str; 
    return 0;
}

void megaphone(char* str)
{
    while (*str) {
        *str = toupper(*str); // uppercase one char
        str++; // move on to next char
    }
    if (strlen(str) == 0)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    
}