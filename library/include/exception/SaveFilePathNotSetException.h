//
// Created by Mateusz Ostrowski on 14/06/2022.
//

#ifndef PACZKOMAT_SAVEFILEPATHNOTSETEXCEPTION_H
#define PACZKOMAT_SAVEFILEPATHNOTSETEXCEPTION_H

#include <exception>

class SaveFilePathNotSetException : public std::exception {
public:
    const char * what() const noexcept override;
};


#endif //PACZKOMAT_SAVEFILEPATHNOTSETEXCEPTION_H
