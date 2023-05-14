/**
 * @file player.h
 * @author Luka Luig
 * @brief
 * @date 2023-05-14
 *
 * Copyright (c) 2023 luka luig
 *
 */

#ifndef EVENT_H
#define EVENT_H

#include <iostream>
#include <vector>

class Event {
  private:
	unsigned int ID;
	std::string name;
	double fee;
	// std::vector<Player> participants;
	unsigned int number_participants;
};

#endif