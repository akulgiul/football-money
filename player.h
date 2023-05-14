/**
 * @file player.h
 * @author Luka Luig
 * @brief 
 * @date 2023-05-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef PLAYER_H
#define PLAYER_H

#include "event.h"
#include <iostream>
#include <vector>

class Player {
private:
	unsigned int ID;
	std::string name;
	unsigned int games_played;
	// std::vector<Event> events;
	double total;
	double already_payed;

public:
	Player();
	~Player();

	unsigned int get_ID() { return ID; }
	std::string get_name() { return name; }
	unsigned int get_games_played() { return games_played; }
	// get_events()?
	double get_total() { return total; }
	double get_already_payed() { return already_payed; }
	double get_open() { return total - already_payed; }

	void set_ID(unsigned int new_ID) { ID = new_ID; }
	void set_name(std::string new_name) { name = new_name; }
	// void add_event(Event event);
	void set_already_payed(double new_payed) { already_payed = new_payed; }
};

#endif