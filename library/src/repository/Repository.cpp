//
// Created by Piotr on 13/06/2022.
//

#include "repository/Repository.h"
template<typename T>
void Repository<T>::add(T *t) {
    vector.push_back(t);
}

template<typename T>
void Repository<T>::remove(T *t) {
    if (std::count(vector.begin(), vector.end(),t)) {
        vector.erase(std::remove(vector.begin(), vector.end(),t), vector.end());
    }
}

template<typename T>
void Repository<T>::load(std::string filePath) {

}

template<typename T>
void Repository<T>::save(std::string filePath) {

}

template<typename T>
Repository<T>::~Repository() {
    for(auto t : vector){
        delete t;
    }
}
