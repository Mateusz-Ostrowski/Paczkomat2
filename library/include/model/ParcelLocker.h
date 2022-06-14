//
// Created by Piotr Rutkowski on 25/04/2022.
//

#ifndef CARRENTAL_PARCELLOCKER_H
#define CARRENTAL_PARCELLOCKER_H
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <model/Client.h>
#include <model/Parcel.h>
#include "Address.h"
#include "Parcel.h"
#include "exception/DoorNotFoundException.h"
#include "exception/DoorOccupiedException.h"
#include "exception/ParcelNotFoundException.h"


class ParcelLocker {
private:
   std::string id;
   std::unordered_map<std::string,Parcel*> doorParcelMap;
   Address* address;
public:
    ParcelLocker(Address *address,std::string  id);

    virtual ~ParcelLocker();

    const std::string &getId() const;

    const std::unordered_map<std::string, Parcel *> &getDoorParcelMap() const;

    Address *getAddress() const;

    void addParcel(const std::string& door,Parcel*);

    void collectParcel(const std::string& code);

    std::string toString();


};


#endif //CARRENTAL_PARCELLOCKER_H
