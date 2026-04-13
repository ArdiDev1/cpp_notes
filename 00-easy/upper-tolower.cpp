#include <iostream>
#include <cctype>
#include <string>

void mod_string(std::string& str)
{   
    bool flag = true;

    for(char& ch : str) {
        if(flag)
            ch = std::toupper(ch);
        else
            ch = std::tolower(ch); 

        flag = !flag;
    }
}

int main()
{
    std::string msg = "Hello world";

    mod_string(msg);

    std::cout << msg << std::endl;
    
    return 0;
}
