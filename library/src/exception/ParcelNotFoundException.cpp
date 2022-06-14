//
// Created by Piotr on 14/06/2022.
//

#include "exception/ParcelNotFoundException.h"

ParcelNotFoundException::ParcelNotFoundException(const std::string &code, ParcelLocker *parcelLocker)
: message(std::string("No parcel with code ") + code + std::string(" found in " + parcelLocker->toString())){}

const char * ParcelNotFoundException::what() const noexcept {
    return message.c_str();
}