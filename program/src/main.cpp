//
// Created by Piotr Rutkowski on 01/04/2022.
//

//Czy obecna implementacja rzeczywiście spełnia ten warunek? Utwórz test przebiegający według następującego scenariusza:
//
//Utwórz obiekty Pojazdu, Klienta oraz łączącego je Wypożyczenia
//        Zakończ wypożyczenie tak, aby jego koszt był niezerowy; zapamiętaj koszt wypożyczenia
//        Zmień cenę wypożyczenia Pojazdu
//        Sprawdź, czy obecny koszt Wypożyczenia pozostał bez zmian


#include <manager/PersistenceManager.h>
#include<iostream>

int main()
{
    Client *client1 = new Client("Test","Testowski","+48700800900",1);
    Client *client2 = new Client("Jan","Kowalski","+48700800901",2);

    auto *parcelRepository = new ParcelRepository();
    auto *parcelLockerRepository = new ParcelLockerRepository();
    auto *clientRepository = new ClientRepository();

    auto *persistenceManager =
            new PersistenceManager("parcel.csv",
                                   "client.csv",
                                   "parcel_locker.csv",
                                   "C:\\Users\\ZzZ\\CLionProjects\\CarRental\\",
                                   parcelRepository,
                                   clientRepository,
                                   parcelLockerRepository);

    auto *clientManager = new ClientManager(clientRepository);
    persistenceManager->loadFromDisk();

    clientManager->add(client1);
    clientManager->add(client2);

    Parcel parcel("id",10,12,12,12,"2e",std::set<ParcelType>{WRAZLIWA_NA_WILGOTNOSC});
    std::cout << parcel.toString();




    persistenceManager->saveToDisk();
    delete parcelRepository;
    delete parcelLockerRepository;
    delete clientRepository;
    delete persistenceManager;
    return 0;
}