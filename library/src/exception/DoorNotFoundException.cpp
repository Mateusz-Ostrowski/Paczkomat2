//
// Created by Piotr on 14/06/2022.
//

#include "exception/DoorNotFoundException.h"

DoorNotFoundException::DoorNotFoundException(const std::string &doorNumber, ParcelLocker *parcelLocker)
: message(std::string("No door with number ") + doorNumber + std::string(" found in ") + parcelLocker->toString())
{}

const char * DoorNotFoundException::what() const noexcept {
    return message.c_str();
}