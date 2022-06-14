//
// Created by Mateusz Ostrowski on 14/06/2022.
//

#include "SaveFilePathNotSetException.h"

const char *SaveFilePathNotSetException::what() const noexcept {
    return "Save file path not set";
}
