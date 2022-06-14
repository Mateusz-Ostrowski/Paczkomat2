//
// Created by Piotr on 13/06/2022.
//

#ifndef CARRENTAL_PARCELREPOSITORY_H
#define CARRENTAL_PARCELREPOSITORY_H
#include "Repository.h"
#include "model/Parcel.h"
class ParcelRepository: public Repository<Parcel>{
    virtual void add(Parcel *t);
    virtual void remove(Parcel *t);
    virtual void save(std::string filePath);
    virtual void load(std::string filePath);
    virtual ~Repository();
};


#endif //CARRENTAL_PARCELREPOSITORY_H
