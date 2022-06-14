//
// Created by Piotr on 14/06/2022.
//

#include "exception/DoorOccupiedExeption.h"

DoorNotFoundException::DoorNotFoundException(const std::string &doorNumber): message(std::string("No door with number : ") + doorNumber){}

const char * DoorNotFoundException::what() const noexcept {
    return message.c_str();
}