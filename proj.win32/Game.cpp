#include "Game.h"
//#include "Ziyuan.h"

Game::Game(void)
{
	pigarray=NULL;
}


Game::~Game(void)
{
	//CC_SAFE_RELEASE(pigarray);
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

	  CCSize s = CCDirector::sharedDirector()->getWinSize();

//	 CCSprite* pPlay = CCSprite::createWithSpriteFrameName("pig02.png");
//	 pPlay->setPosition(ccp(getWinSize().width/5,pPlay->getContentSize().height/2));
//	 this->addChild(pPlay,1);
//	 CCActionInterval* pactionjump = CCJumpTo::create(3.0f,ccp(getWinSize().width*0.7,0),getWinSize().height*0.8,2);
//	 pPlay->runAction(pactionjump);

//	 CCSpriteBatchNode* pbatchnode = CCSpriteBatchNode::create("playimage.png");
	 
//	  this->addChild(pbatchnode);
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

	 // pigarray= CCArray::create();
	 // CC_SAFE_RETAIN(pigarray);
	 // for(int i=0; i<5; i++)
	 // {
		//  CCSprite* pPig = CCSprite::createWithSpriteFrameName("pig01.png");
		//  pbatchnode->addChild(pPig);
		//  pigarray->addObject(pPig);

	 // }
	 //pbatchnode->setPosition(ccp(0,0));

	 //int mgap = 20;
	
	 //for (unsigned int i = 0; i < (pigarray->count()); i++)
	 //{
		// CCSprite* psprite =(CCSprite*) pigarray->objectAtIndex(i);
		// psprite->setPosition(ccp((50+i*100),0));

		// //psprite->runAction(pactionjump);
	 //}
	 //pbatchnode->runAction(pactionjump);

	  //CCPointArray* parray = CCPointArray::create(10);
	  //parray->addControlPoint(ccp(s.width*16/48,s.height*80/80));
	  //parray->addControlPoint(ccp(s.width*10/48,s.height*70/80));
	  //parray->addControlPoint(ccp(s.width*9/48,s.height*60/80));
	  //parray->addControlPoint(ccp(s.width*19/48,s.height*53/80));
	  //parray->addControlPoint(ccp(s.width*31/48,s.height*47/80));
	  //parray->addControlPoint(ccp(s.width*36/48,s.height*39/80));
	  //parray->addControlPoint(ccp(s.width*31/48,s.height*27/80));
	  //parray->addControlPoint(ccp(s.width*19/48,s.height*20/80));
	  //parray->addControlPoint(ccp(s.width*10/48,s.height*12/80));
	  //parray->addControlPoint(ccp(s.width*0/48,s.height*9/80));

	  //CCPointArray* aparray = CCPointArray::create(10);
	  //aparray->addControlPoint(ccp(s.width*16/48,s.height*80/80));
	  //aparray->addControlPoint(ccp(s.width*16/48,s.height*70/80));
	  //aparray->addControlPoint(ccp(s.width*16/48,s.height*60/80));
	  //aparray->addControlPoint(ccp(s.width*16/48,s.height*50/80));
	  //aparray->addControlPoint(ccp(s.width*16/48,s.height*40/80));
	  //aparray->addControlPoint(ccp(s.width*16/48,s.height*30/80));

	  CCPointArray* pPatharray2 = CCPointArray::create(20);
	  pPatharray2->addControlPoint(ccp(s.width*43/48,s.height*80/80));
	  pPatharray2->addControlPoint(ccp(s.width*36/48,s.height*73/80));
	  pPatharray2->addControlPoint(ccp(s.width*27/48,s.height*64/80));
	  pPatharray2->addControlPoint(ccp(s.width*20/48,s.height*51/80));
	  pPatharray2->addControlPoint(ccp(s.width*23/48,s.height*42/80));
	  pPatharray2->addControlPoint(ccp(s.width*32/48,s.height*36/80));
	  pPatharray2->addControlPoint(ccp(s.width*39/48,s.height*35/80));
	  pPatharray2->addControlPoint(ccp(s.width*43/48,s.height*39/80));
	  pPatharray2->addControlPoint(ccp(s.width*44/48,s.height*46/80));
	  pPatharray2->addControlPoint(ccp(s.width*42/48,s.height*55/80));
	  pPatharray2->addControlPoint(ccp(s.width*33/48,s.height*59/80));
	  pPatharray2->addControlPoint(ccp(s.width*17/48,s.height*64/80));
	  pPatharray2->addControlPoint(ccp(s.width*8/48,s.height*61/80));
	  pPatharray2->addControlPoint(ccp(s.width*55/48,s.height*0/80));


	  ccBezierConfig bezier2;  
	  bezier2.controlPoint_1 = CCPointMake(0, s.height);  
	  bezier2.controlPoint_2 = CCPointMake(300, 500);  
	  bezier2.endPosition = CCPointMake(100,100);  

	  CCActionInterval* bez = CCBezierTo::create(3,bezier2);

	  CCCatmullRomTo* actionromto = CCCatmullRomTo::create(5,  pPatharray2);
	  CCActionInterval* actionreverse = actionromto->reverse();
	  CCFiniteTimeAction* actionromtoall = CCSequence::create(actionromto,actionreverse,NULL);
	  
	  CCCardinalSplineBy* actionsplingby = CCCardinalSplineBy::create(3,pPatharray2,2);
	  CCActionInterval* preverse = actionsplingby->reverse();
	  CCFiniteTimeAction* actionall = CCSequence::create(actionsplingby,preverse,NULL);

	  CCCardinalSplineTo* actionsolingto = CCCardinalSplineTo::create(5,pPatharray2,1);
	  CCActionInterval* preverseslingto = actionsolingto->reverse();
	  CCFiniteTimeAction* actionaslingtoall = CCSequence::create(actionsolingto,preverseslingto,NULL);

	  CCSprite* ppig = CCSprite::createWithSpriteFrameName("pig01.png");
	  this->addChild(ppig);
	  ppig->setPosition(ccp(0,0));
	  
	  ppig->runAction(bez);

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