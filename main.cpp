/**
 * @file main.cpp
 * @author Luka Luig
 * @brief 
 * @date 2023-05-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "event.h"
#include "player.h"
#include <iostream>

int main() {
	// test
	Player luka;
	luka.set_name("luka");
	std::cout << luka.get_name() << std::endl;
}