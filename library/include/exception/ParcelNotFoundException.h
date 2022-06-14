//
// Created by Piotr on 14/06/2022.
//

#ifndef PACZKOMAT_PARCELNOTFOUNDEXEPTION_H
#define PACZKOMAT_PARCELNOTFOUNDEXEPTION_H
#include "iostream"
#include "model/ParcelLocker.h"
class ParcelLocker;

class ParcelNotFoundExeption: public std::exception{
private:
    std::string message;
public:
    explicit ParcelNotFoundExeption(const std::string& code, ParcelLocker *parcelLocker);

    const char * what() const noexcept override;
};


#endif //PACZKOMAT_PARCELNOTFOUNDEXEPTION_H
