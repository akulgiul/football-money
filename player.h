/**
 * @file player.h
 * @author Luka Luig
 * @brief
 * @date 2023-05-14
 *
 * Copyright (c) 2023 luka luig
 *
 */

#ifndef PLAYER_H
#define PLAYER_H

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
	double open; // yet to pay
};

#endif