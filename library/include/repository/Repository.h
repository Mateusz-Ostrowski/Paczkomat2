//
// Created by Piotr on 13/06/2022.
//

#ifndef CARRENTAL_REPOSITORY_H
#define CARRENTAL_REPOSITORY_H
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include <iostream>
template<typename T>
class Repository {
protected:
    std::vector<T*> vector;
public:
    virtual void add(T *t) {
        vector.push_back(t);
    }

    virtual void remove(T *t) {
        if (std::count(vector.begin(), vector.end(),t)) {
            vector.erase(std::remove(vector.begin(), vector.end(),t), vector.end());
        }
    }

    virtual void load(const std::string& filePath) = 0;

    virtual void save(const std::string& filePath) = 0;

    virtual ~Repository() {
        for(auto t : vector){
            delete t;
        }
    }
};



#endif //CARRENTAL_REPOSITORY_H
