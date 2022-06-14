//
// Created by Piotr on 14/06/2022.
//

#include "exception/ParcelNotFoundExeption.h"

ParcelNotFoundExeption::ParcelNotFoundExeption(const std::string &code, ): message(std::string("No parcel with code : ") + code + std::string(" found in ParcelLocker "+)){}

const char * ParcelNotFoundException::what() const noexcept {
    return message.c_str();
}