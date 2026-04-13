#include <iostream>
#include <string>
#include <cctype>

int sum_chars(const std::string& str)
{
    int count = 0;

    for(const char& ch : str)
        count += static_cast<int>(ch);

        return count;
}

int main()
{
    std::string msg = "ABC";

    std::cout << sum_chars(msg) << std::endl;

    return 0;
}