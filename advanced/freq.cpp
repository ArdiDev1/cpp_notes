#include <iostream>
#include <string>
#include <unordered_map>

void freq(const std::string& str)
{
    int uniq = 0;
    std::unordered_map<char, int> map;

    for(const auto& ch : str)
        map[ch]++;

    for(char i = 'a'; i <= 'z'; i++){
        std::cout << i << ": " << map[i] << std::endl;
    }
}

int main()
{
    std::string msg = "a";

    freq(msg);

    return 0;
}