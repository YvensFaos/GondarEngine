#ifndef __GS_GGJ_SCORE_H__
#define __GS_GGJ_SCORE_H__

#include "gsGGJObject.h"
#include "gsGGJNumber.h"
#include "gsArrayList.h"

class gsGGJScore : public gsGGJObject
{
public:
	gsArrayList<gsGGJNumber> numbers;

	gsGGJScore(void) {}
	gsGGJScore(gsGGJGame* game);
	virtual ~gsGGJScore(void);

	virtual void update();
	virtual void draw();

	void onCollision(gsGameObject *other, const gsCollisionInfo& info){}
};

#endif