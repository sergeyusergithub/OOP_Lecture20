#include <iostream>

#include <vector>
#include <set>
#include <algorithm>



int main(){

    std::vector<int> collection(10);

    for(auto &i:collection){
        std::cout << i << " ";
    }

    std::cout << std::endl;

    std::for_each(collection.begin(),\
    collection.end(), \
    [](int &a)->void{
    static int i{1};
    a = i++;} );

    for(auto &i:collection){
        std::cout << i << " ";
    }
    
    std::cout << "\n\n";

    //std::vector<int> collection2(10);
    std::vector<int> collection2(collection.rbegin(),collection.rend());

    for(auto &i:collection2){
        std::cout << i << " ";
    }

    std::cout << std::endl;

    if(std::equal(collection2.begin(), collection2.end(),\
                    collection.begin(), collection.end())){
        std::cout << "equal collection\n";
    } else {
        std::cout << "not equal collection\n";
    }

    return 0;
}