#include <iostream>
#include <sstream>
#include <string>
#include <vector>




int main(){
    std::string word, msg = "C++ is so much fun";
    std::vector<std::string> words;

    std::stringstream ss(msg);
    while (ss >> word) {
        words.push_back(word);
    }

    for(const auto& w : words)
        std::cout << w << std::endl;
    
    return 0;
}