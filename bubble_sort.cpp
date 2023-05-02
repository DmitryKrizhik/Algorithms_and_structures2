#include <iostream>

template <typename T> 
void bubble_sort(T &arr) 
{ 
    for(std::size_t i = 0; arr.size() && i < arr.size() - 1; ++i) 
    { 
        for(std::size_t k = i; k + 1 > 0; --k) 
        { 
            if(arr[k] > arr[k+1]) 
                std::swap(arr[k], arr[k+1]); 
        } 
    } 
}