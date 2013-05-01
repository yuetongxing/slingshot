#include "BasicLayer.h"


BasicLayer::BasicLayer(void)
{
}


BasicLayer::~BasicLayer(void)
{
}


bool BasicLayer::init()
{
	bool bret = false;
	do 
	{
		CC_BREAK_IF(!CCLayer::init());


		bret= true;
	} while (0);
	return bret;
}

CCSize BasicLayer::getWinSize()
{
	return CCDirector::sharedDirector()->getWinSize();
}



void BasicLayer::setBackGround (const char* backimagename)
{
	CCSprite* pSprite = CCSprite::create(backimagename);
	pSprite->setPosition(ccp(getWinSize().width/2,getWinSize().height/2));
	this->addChild(pSprite,0);
	

}