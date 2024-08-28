#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main() {
    setlocale(0, "Russian");
 
    std::vector<int> vec = { 7, 15, 2, 404, 5, 44, 192, 66, 1, 14 };

 
    std::map<int, int> map;

    
    for (auto i : vec) {
        map[i]++;
    }

    
    std::vector<int> result;
    for (auto it = map.rbegin(); it != map.rend(); ++it) {
        result.push_back(it->first);
    }
    
    std::cout << "Изначальный вектор:" << std::endl;
    
    for (auto i : vec) {
        std::cout << i << ' ';
      
   }
    
    std::cout << std::endl;
    std::cout << "Отсортированный вектор: " << std::endl;
    for (auto i : result) {
        std::cout << i << " ";
    }

    return 0;
}