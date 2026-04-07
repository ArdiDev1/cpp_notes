#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <string>

using std::string;

int main()
{
    std::unordered_set<string> users;
    users.insert("john doe");
    users.insert("bob");
    users.insert("this");


    std::unordered_set<char> set;
    string newstr,  orgstr = "banana";

    size_t ind = 0;
    for( char ch : orgstr ) {
        if(!set.contains(ch)){
            set.insert(ch);    
            newstr += ch;
        }
    } 

    

    std::cout << newstr << std::endl;

    return 0;
}