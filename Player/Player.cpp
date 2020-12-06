#include "./Player.hpp"

Player::Player(std::string name_) {
    name = name_;
    status = alive;
    healed = false;
}

bool Player::is_name(std::string name_) { return name == name_; }

Player_status Player::get_status() { return status; }

bool Player::need_to_wake_up() { return false; }

void Player::heal() { healed = true; }

void Player::silence() { status = silent; }

void Player::assult() {
    std::cout << "Mafia tried to kill " << name << std::endl;
}

void Player::die_in_night() {}