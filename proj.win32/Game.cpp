#include "Game.h"


Game::Game(void)
{
	pigarray=NULL;
}


Game::~Game(void)
{
	CC_SAFE_RELEASE(pigarray);
	//CC_SAFE_DELETE(pigarray);
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
//	 CCSprite* pPlay = CCSprite::createWithSpriteFrameName("pig02.png");
//	 pPlay->setPosition(ccp(getWinSize().width/5,pPlay->getContentSize().height/2));
//	 this->addChild(pPlay,1);
	 CCActionInterval* pactionjump = CCJumpTo::create(3.0f,ccp(getWinSize().width*0.7,0),getWinSize().height*0.8,2);
//	 pPlay->runAction(pactionjump);

	 CCSpriteBatchNode* pbatchnode = CCSpriteBatchNode::create("playimage.png");
	 
	  this->addChild(pbatchnode);
	 //CCSprite *psprite1 = CCSprite::createWithSpriteFrameName("pig01.png");
	 //CCSprite *psprite2 = CCSprite::createWithSpriteFrameName("pig02.png");
	 //CCSprite *psprite3 = CCSprite::createWithSpriteFrameName("pig03.png");
	 //CCSprite *psprite4 = CCSprite::createWithSpriteFrameName("pig02.png");

	 //pbatchnode->addChild(psprite1);
	 //pbatchnode->addChild(psprite2);
	 //pbatchnode->addChild(psprite3);
	 //pbatchnode->addChild(psprite4);
	 //
	

	 //psprite1->setposition(ccp(100,200));
	 //psprite2->setposition(ccp(200,200));
	 //psprite3->setposition(ccp(300,200));
	 //psprite4->setposition(ccp(400,200));

	  pigarray= CCArray::create();
	  CC_SAFE_RETAIN(pigarray);
	  for(int i=0; i<5; i++)
	  {
		  CCSprite* pPig = CCSprite::createWithSpriteFrameName("pig01.png");
		  pbatchnode->addChild(pPig);
		  pigarray->addObject(pPig);

	  }
	 pbatchnode->setPosition(ccp(0,0));

	 int mgap = 20;
	
	 for (unsigned int i = 0; i < (pigarray->count()); i++)
	 {
		 CCSprite* psprite =(CCSprite*) pigarray->objectAtIndex(i);
		 psprite->setPosition(ccp((50+i*100),0));

		 //psprite->runAction(pactionjump);
	 }
	 pbatchnode->runAction(pactionjump);


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