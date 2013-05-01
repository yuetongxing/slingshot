#include "Game.h"


Game::Game(void)
{
}


Game::~Game(void)
{
	CC_SAFE_DELETE_ARRAY(pigarray);
}

bool Game::init()
{
	bool bInit = false;
	do 
	{
		CC_BREAK_IF(!BasicLayer::init());
		setupViews ();
		bInit = true;
	} while (0);

	return bInit;
}

void Game::setupViews()
{
     setBackGround("gamebackground.png");

	 CCSpriteFrameCache::sharedSpriteFrameCache()->addSpriteFramesWithFile("playimage.plist","playimage.png");
	 CCSprite* pPlay = CCSprite::createWithSpriteFrameName("pig02.png");
	 pPlay->setPosition(ccp(getWinSize().width/5,pPlay->getContentSize().height/2));
	 this->addChild(pPlay,1);
	 CCActionInterval* pactionjump = CCJumpTo::create(1.5f,ccp(getWinSize().width*0.7,0),getWinSize().height*0.8,1);
	 pPlay->runAction(pactionjump);

	 CCSpriteBatchNode* pbatchnode = CCSpriteBatchNode::create("pig01.png",5);
	 pbatchnode->setPosition(CCPointZero);
	 pigarray= CCArray::createWithCapacity(5);
	 pigarray->retain();
	 for(int i=0; i<5; i++)
	 {
		 CCSprite* pPig = CCSprite::createWithTexture(pbatchnode->getTexture());
		 pigarray->
	 }

}

CCScene* Game::scene()
{
	CCScene * scene = NULL;
	do 
	{
		// 'scene' is an autorelease object
		scene = CCScene::create();
		CC_BREAK_IF(! scene);

		// 'layer' is an autorelease object
		Game *layer = Game::create();
		CC_BREAK_IF(! layer);

		// add layer as a child to scene
		scene->addChild(layer);

	} while (0);

	// return the scene
	return scene;

}