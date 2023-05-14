/**
 * @file event.h
 * @author Luka Luig
 * @brief 
 * @date 2023-05-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef EVENT_H
#define EVENT_H

#include "player.h"
#include <iostream>
#include <vector>

class Event {
private:
	unsigned int ID;
	std::string name;
	double fee;
	unsigned int number_players;
	// std::vector<Player> players;

public:
	unsigned int get_ID() { return ID; }
	std::string get_name() { return name; }
	double get_fee() { return fee; }
	int get_nr_players() { return number_players; }
	// std::vector<Player> get_players();

	void set_ID(unsigned int new_ID) { ID = new_ID; }
	void set_name(std::string new_name) { name = new_name; }
	void set_fee(double new_fee) { fee = new_fee; }
	void set_nr_participants(unsigned int new_number) { number_players = new_number; }

	// void add_player(Player player);
	// void remove_player(Player player);
	void set_players();
};

#endif