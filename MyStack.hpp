//
// Created by highz on 10/22/2017.
//

#ifndef STACKTEMPLATE_MYSTACK_HPP
#define STACKTEMPLATE_MYSTACK_HPP

#include <iostream>

template<typename T>
class MyStack {

private:

    T *values;
    int cap;
    int volume; // holds size

    void capacity(int a) { cap = a; }

public:

    MyStack(int = 2);
    MyStack(const T&);
    ~MyStack() { delete [] values; } // decon

    void clear();

    void push(const MyStack<T> &);

    void pop();

    int size (){ return volume;}


    bool empty(){
        if(volume == 0){
            return true;
        }// if
        else{
            return false;
        } // else
    } // empty

    T &peek() { return values[volume - 1]; };

};

template<typename T>
MyStack<T>::MyStack(const MyStack<T>& obj) {

    cap = obj.cap;
    values = new T[cap];

    for (int i = 0; i < cap; ++i) {

        values[i] = obj.values[i];

    }//



}// copy constructor


template<typename T>
MyStack<T>::MyStack(int cap) {

    this->cap;
    volume = 0;
    values = new T[cap];

    for (int i = 0; i < cap; ++i) {
        values[i] = T();
    }

}; // default constructor




template<typename T>
void MyStack<T>::pop() {

    if (volume > 0) {
        volume--;
    } // if
    else {
        std::cout << "Nothing to pop\n";
    }// else

}// pop

template<typename T>
void MyStack<T>::clear() {

    volume = 0;

}// clear

template<typename T>
void MyStack<T>::push(const T &value) {

    if (volume == cap) {
        capacity(cap * 2);
    } // if

    values[volume] = value;
    ++volume;

}


#endif //STACKTEMPLATE_MYSTACK_HPP
