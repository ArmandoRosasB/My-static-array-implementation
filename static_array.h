#include <iostream>
#include <exception>

#ifndef static_array_H
#define static_array_H

template <class T>

class static_array{
    private:
        T* arr;
        int index;
        int size;
    public:
        static_array(int);
        ~static_array();
        void add(T);

        int emptySpaces();

        bool full();
        bool empty();

        void reset();

        std::string toString();
};

template <class T>
static_array<T>:: static_array(int size){
    arr = new T[size];
    index = 0;
    this->size = size;
}

template <class T>
static_array<T>:: ~static_array(){
    delete[] arr;
    index = 0;
    size = 0;
}

template <class T>
void static_array<T>:: add(T value){
    if (index == size)
        return;
    
    arr[index++] = value;
    std::cout<<arr[index - 1];
}

template <class T>
int static_array<T>:: emptySpaces(){
    if (full())
        return 0;
    return size - index;
}

template <class T>
bool static_array<T>:: full(){
    return index-1 == size;
}

template <class T>
bool static_array<T>:: empty(){
    return index == 0;
}

template <class T>
void static_array<T>:: reset(){
    index = 0;
} 

template <class T>
std::string static_array<T>:: toString(){
    std::stringstream aux;
    aux<< "[";
    for(int i = 0; i < index; i++){
        if (i == index - 1){
            aux<< arr[i];
            break;
        }
        aux<< arr[i] <<", ";
    }
    aux <<"]";

    return aux.str();
}

#endif //static_array_H