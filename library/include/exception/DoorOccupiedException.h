//
// Created by Piotr on 14/06/2022.
//

#ifndef PACZKOMAT_DOOROCUPIEDEXEPTION_H
#define PACZKOMAT_DOOROCUPIEDEXEPTION_H
#include "iostream"
#include "model/ParcelLocker.h"
class ParcelLocker;

class DoorOccupiedException: public std::exception{
private:
    std::string message;
public:
    explicit DoorOccupiedException(const std::string& door, ParcelLocker* parcelLocker);

    const char * what() const noexcept override;
};


#endif //PACZKOMAT_DOOROCUPIEDEXEPTION_H
