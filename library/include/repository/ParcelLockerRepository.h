//
// Created by Piotr on 13/06/2022.
//

#ifndef CARRENTAL_PARCELLOCKERREPOSITORY_H
#define CARRENTAL_PARCELLOCKERREPOSITORY_H
#include "Repository.h"
#include "model/ParcelLocker.h"

class ParcelLockerRepository: public Repository<ParcelLocker>{
public:
    void load(const std::string& filePath) override;

    void save(const std::string& filePath) override;
};


#endif //CARRENTAL_PARCELLOCKERREPOSITORY_H
