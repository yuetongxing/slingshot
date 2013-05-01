
#pragma once

#ifndef __BASIC_LAYER__
#define  __BASIC_LAYER__

#include "cocos2d.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;

class BasicLayer : public CCLayer
{
public:
	BasicLayer(void);
	~BasicLayer(void);

	virtual bool init();

	CCSize getWinSize();

	CREATE_FUNC(BasicLayer);

	void setBackGround (const char* backimagename);




};






#endif