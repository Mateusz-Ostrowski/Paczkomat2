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
    virtual void add(T *t);
    virtual void remove(T *t);
    virtual void save(std::string filePath);
    virtual void load(std::string filePath);
    virtual ~Repository();
};



#endif //CARRENTAL_REPOSITORY_H
