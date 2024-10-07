#include <iostream>
#include <cctype>


void    megaphone(char *str) 
{
    int i = 0;
    if (str[i] == ' ')
        i+=1;
    for (; str[i]; ++i) 
    {
        if (str[i] == ' ' && str[i + 1] == '\0')
            return;
        std::cout << (char)std::toupper(str[i]);
    }
}

int main(int argc, char **argv) 
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else 
    {
        for (int i = 1; i < argc; ++i)
        {
            if (i != 1)
                std::cout << " ";
            megaphone(argv[i]);
        }
        std::cout << std::endl;
    }
    return 0;
}