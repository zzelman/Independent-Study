/*
 * CGame.h
 *
 *  Created on: Sep 14, 2013
 *      Author: zZelman
 */

#ifndef CGAME_H_
#define CGAME_H_

#include "include_sfml.h"

class CGame
{
public:
	CGame();
	~CGame();

	void startGame();
	void stopGame();
private:
	sf::RenderWindow* m_pGameWindow;
	bool isRunning;
	bool isPaused;

	void gameLoop();

	bool input_user(sf::Event* pEvent);
	bool input_gameSystem(sf::Event* pEvent);
	void update();
	void render();
};

#endif /* CGAME_H_ */