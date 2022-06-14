//
// Created by Piotr on 14/06/2022.
//

#ifndef CARRENTAL_EXCEPTIONS_H
#define CARRENTAL_EXCEPTIONS_H
#include "iostream"
#include "model/ParcelLocker.h"
class ParcelLocker;


class DoorNotFoundException: public std::exception{
private:
    std::string message;
public:
    explicit DoorNotFoundException(const std::string& doorNumber, ParcelLocker *locker);

    const char * what() const noexcept override;

};


#endif //CARRENTAL_EXCEPTIONS_H
