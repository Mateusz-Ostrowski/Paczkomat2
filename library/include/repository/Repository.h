//
// Created by Piotr on 13/06/2022.
//

#ifndef CARRENTAL_REPOSITORY_H
#define CARRENTAL_REPOSITORY_H
#include <vector>
#include <string>
#include <algorithm>

template<typename T>
class Repository {
protected:
    std::vector<T*> vector;
public:
    void add(T *t) {
        vector.push_back(t);
    }

    void remove(T *t) {
        if (std::count(vector.begin(), vector.end(),t)) {
            vector.erase(std::remove(vector.begin(), vector.end(),t), vector.end());
        }
    }

    void load(std::string filePath) {

    }

    void save(std::string filePath) {

    }

    ~Repository() {
        for(auto t : vector){
            delete t;
        }
    }
};



#endif //CARRENTAL_REPOSITORY_H
