//
// Created by Piotr on 14/06/2022.
//

#ifndef PACZKOMAT_PARCELNOTFOUNDEXCEPTION_H
#define PACZKOMAT_PARCELNOTFOUNDEXCEPTION_H
#include "iostream"
#include "model/ParcelLocker.h"
class ParcelLocker;

class ParcelNotFoundException: public std::exception{
private:
    std::string message;
public:
    explicit ParcelNotFoundException(const std::string& code, ParcelLocker *parcelLocker);

    const char * what() const noexcept override;
};


#endif //PACZKOMAT_PARCELNOTFOUNDEXCEPTION_H
