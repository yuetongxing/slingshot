#pragma once
#ifndef __GAME_H__
#define __GAME_H__

#include "basiclayer.h"
class Game : public BasicLayer
{
public:
	Game(void);
	~Game(void);

	virtual bool init();

	void setupViews();

	static CCScene* scene();

	CREATE_FUNC(Game);

	CCArray*  pigarray;
};




#endif