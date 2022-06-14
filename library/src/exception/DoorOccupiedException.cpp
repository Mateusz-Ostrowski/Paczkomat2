//
// Created by Piotr on 14/06/2022.
//

#include <exception/DoorOccupiedException.h>

#include "exception/DoorOccupiedException.h"



DoorOccupiedException::DoorOccupiedException(const std::string &door, ParcelLocker *parcelLocker)
: message(std::string("Door with number ") + door + " of "+parcelLocker->toString() + " already has parcel inside"){

}

const char *DoorOccupiedException::what() const noexcept {
    return message.c_str();
}
