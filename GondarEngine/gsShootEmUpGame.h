#ifndef __GS_SHOOT_EM_UP_GAME__
#define __GS_SHOOT_EM_UP_GAME__


#include "gsGame.h"
#include "gsGameObject.h"
#include "gsArrayList.h"

class gsShootEmUp_EnemySpawner;
class gsShootEmUp_Player;

class gsShootEmUpGame : public gsGame {
private:
	gsArrayList<gsGameObject*> objects;
	gsArrayList<gsGameObject*> objectsToBeRemoved;
	gsShootEmUp_Player *player;
	gsShootEmUp_EnemySpawner * spawner;

public:
	virtual void start();
	virtual void end();

	virtual bool isRunning();

	virtual void update();
	virtual void draw();

	void addObjetToObjectsList(gsGameObject* object);
	void removeObjectFromObjectsList(gsGameObject *object);
};

#endif