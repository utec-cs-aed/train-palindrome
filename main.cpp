#include <iostream>
#include "solution.h"

using namespace std;

int main() {
    DoubleList* list = new DoubleList();
    push_back(list, 1);
    push_back(list, 2);
    push_back(list, 3);
    push_back(list, 2);
    push_back(list, 1);    
    if(is_palindrome(list)){
        std::cout<<"palindrome\n";
    } else {
        std::cout<<"no palindrome\n";
    }

    list = new DoubleList();
    push_back(list, 1);
    push_back(list, 2);
    push_back(list, 3);
    push_back(list, 4);
    push_back(list, 5);    
    if(is_palindrome(list)){
        std::cout<<"palindrome\n";
    } else {
        std::cout<<"no palindrome\n";
    }
}
