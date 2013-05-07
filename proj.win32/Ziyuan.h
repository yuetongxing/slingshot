#pragma once
#ifndef __ZIYUAN_H__
#define  __ZIYUAN_H__

#include "cocos2d.h"


USING_NS_CC;

class Ziyuan  : public CCObject
{
public:
	Ziyuan(void);
	~Ziyuan(void);
	CCPointArray* getarrayrand();

private:
	void iniPatharray();
	CCPointArray* pPatharray1 ;
	CCPointArray* pPatharray2 ;
	CCPointArray* pPatharray3 ;
	CCPointArray* pPatharray4 ;
	CCPointArray* pPatharray5 ;
	CCPointArray* pPatharray6 ;



};


#endif
