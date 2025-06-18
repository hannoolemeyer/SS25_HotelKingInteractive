//
// Created by Hanno Ole Meyer on 22.05.25.
//

#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include <vector>

class Player {
private:
    std::string name;
    int money;
    int currentField;
    bool prison;
    int prisonCount;
    int playerID;
    bool realPlayer;
    std::vector<std::string> karten;

public:
    Player(const std::string& name, int startMoney, int playerID, bool realPlayer = true);

    // Getter
    std::string getName() const;
    int getMoney() const;
    int getPosition() const;
    bool inPrison() const;
    int getPrisonCount() const;
    int getID() const;
    bool isRealPlayer() const;
    std::vector<std::string> getKarten() const;

    void addKarte(const std::string& karte);
    void removeKarte(const std::string& karte);
    void addMoney(int amount);
    void setPosition(int field);
    void move(int steps);
    void setPrison();
    void deductPrisonTime();


};

#endif // PLAYER_H
