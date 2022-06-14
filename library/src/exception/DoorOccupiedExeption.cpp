//
// Created by Piotr on 14/06/2022.
//

#include "exception/DoorOccupiedExeption.h"

DoorNotFoundException::DoorNotFoundException(const std::string &doorNumber, ParcelLocker *parcelLocker)
: message(std::string("Door with number ") + doorNumber + " of "+parcelLocker->toString() + " already has parcel inside"){}

const char * DoorNotFoundException::what() const noexcept {
    return message.c_str();
}