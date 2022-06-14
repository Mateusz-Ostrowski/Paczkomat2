//
// Created by Piotr on 13/06/2022.
//

#ifndef CARRENTAL_PARCELREPOSITORY_H
#define CARRENTAL_PARCELREPOSITORY_H
#include "Repository.h"
#include "model/Parcel.h"
class ParcelRepository: public Repository<Parcel>{
public:
    void load(const std::string& filePath) override;

    void save(const std::string& filePath) override;
};


#endif //CARRENTAL_PARCELREPOSITORY_H
