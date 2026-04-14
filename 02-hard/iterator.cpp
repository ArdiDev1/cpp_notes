/* 
   Iterators are a generalization of pointers
   that provide a way to access elements in a container 
*/

#include <iostream>
#include <iterator>
#include <vector>

int main()
{
   std::vector<int> vec{1,2,3,4,5};

   for(auto it = vec.begin(); it != vec.end(); ++it) {
      std::cout << *it <<  std::endl;
   }

   auto it = vec.begin();
   for(auto& e : vec)
      std::cout << e << ",";

   return 0;
}