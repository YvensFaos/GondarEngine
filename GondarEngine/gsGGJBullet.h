#ifndef __GS_GGJ_BULLET__
#define __GS_GGJ_BULLET__


#include "gsSpriteSheet.h"
#include "gsGGJObject.h"
#include "gsGGJBulletType.h"

class gsGGJBullet : public gsGGJObject {
public:
	gsGGJBulletType bulletType;
	gsSpriteSheet *sprite;
	gsVector3 offset;
	float angle;

	gsGGJBullet() {}
	gsGGJBullet(bool isPlayerBullet, gsGGJBulletType bulletType, gsTransform* shooterTransform, gsGGJGame *game);
	virtual ~gsGGJBullet();

	void update();
	void draw();

	void doSpiral();
	void setUpSprite(bool isPlayerBullet);
	

	void onCollision(gsGameObject *_other, const gsCollisionInfo& info);
};

#endif