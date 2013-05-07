#include "Ziyuan.h"


Ziyuan::Ziyuan(void)
{
	 pPatharray1 =CCPointArray::create(20) ;
	pPatharray2=CCPointArray::create(20) ; 
	 pPatharray3 =CCPointArray::create(20) ;
	pPatharray4 =CCPointArray::create(20) ;
	pPatharray5=CCPointArray::create(20) ; 
	 pPatharray6 =CCPointArray::create(20) ;
	 iniPatharray();
}


Ziyuan::~Ziyuan(void)
{
}


void Ziyuan::iniPatharray()
{
	CCSize s = CCDirector::sharedDirector()->getWinSize();
	pPatharray1->addControlPoint(ccp(s.width*16/48,s.height*80/80));
	pPatharray1->addControlPoint(ccp(s.width*10/48,s.height*70/80));
	pPatharray1->addControlPoint(ccp(s.width*9/48,s.height*60/80));
	pPatharray1->addControlPoint(ccp(s.width*19/48,s.height*53/80));
	pPatharray1->addControlPoint(ccp(s.width*31/48,s.height*47/80));
	pPatharray1->addControlPoint(ccp(s.width*36/48,s.height*39/80));
	pPatharray1->addControlPoint(ccp(s.width*31/48,s.height*27/80));
	pPatharray1->addControlPoint(ccp(s.width*19/48,s.height*20/80));
	pPatharray1->addControlPoint(ccp(s.width*10/48,s.height*12/80));
	pPatharray1->addControlPoint(ccp(s.width*0/48,s.height*9/80));

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

}

CCPointArray* Ziyuan::getarrayrand()
{
	return pPatharray2;
}