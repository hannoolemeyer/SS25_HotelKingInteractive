//
// Created by Hanno Ole Meyer on 27.05.25.
//
// Player.cpp
#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include "Player.hpp"  // Eigene Headerdatei einbinden

// Neuer Konstruktor mit realPlayer
Player::Player(const std::string& name, int startMoney, int playerID, bool realPlayer)
    : name(name), money(startMoney), currentField(0), prison(false),
      prisonCount(0), playerID(playerID), realPlayer(realPlayer) {}


std::string Player::getName() const {
    return name;
}

int Player::getMoney() const{
    return money;
}

int Player::getPosition() const {
    return currentField;
}

bool Player::inPrison() const {
    return prison;
}

int Player::getPrisonCount() const {
    return prisonCount;
}

int Player::getID() const {
    return playerID;
}

std::vector<std::string> Player::getKarten() const {
    return karten;
}

void Player::addMoney(int amount) {
    money += amount;
}

void Player::setPosition(int position) {
    currentField = position;
}

void Player::move(int steps) {
    currentField += steps;
}

void Player::setPrison() {
    prison = true;
    prisonCount = 3;
}

void Player::deductPrisonTime() {
    if (prisonCount > 0){
        --prisonCount;
    }
}

bool Player::isRealPlayer() const {
    return realPlayer;
}

void Player::addKarte(const std::string& karte) {
    karten.push_back(karte);
}

void Player::removeKarte(const std::string& karte) {
    for (int i = 0; i < karten.size(); ++i) {
        if (karten[i] == karte) {
            karten.erase(karten.begin() + i);
        }
    }
}
