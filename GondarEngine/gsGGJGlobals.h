#ifndef __GS_GGJ_GLOBALS__
#define __GS_GGJ_GLOBALS__


#include "gsGGJPhase.h"
#include "gsGGJBulletType.h"

extern float gsGGJGlobal_PowerFactor;
extern float gsGGJGlobal_SizeFactor;
extern float gsGGJGlobal_SpeedFactor;
extern float gsGGJGlobal_AvoidChance;
extern int gsGGJGlobal_Cannons;
extern gsGGJPhase gsGGJGlobal_Phase;
extern gsGGJBulletType gsGGJGlobal_BulletType;

//Defini��es dos valores iniciais do jogo
#define INITIAL_PLAYER_HEATH 80
#define INITIAL_PLAYER_DAMAGE 10
#define INITIAL_PLAYER_SIZE gsVector3(32, 32, 0);

#define INITIAL_ENEMY_HEATH 42
#define INITIAL_ENEMY_DAMAGE 6
#define INITIAL_ENEMY_SIZE gsVector3(32, 32, 0);

#define INITIAL_BULLET_SPEED gsVector3(0, 100, 0);
#define INITIAL_BULLET_SIZE gsVector3(16, 16, 0)

#define INITIAL_POWER_FACTOR 1.f
#define INITIAL_SIZE_FACTOR 1.f
#define INITIAL_SPEED_FACTOR 1.f
#define INITIAL_AVOID_CHANCE 1.f
#define INITIAL_CANNONS 1
#define INITIAL_PHASE gsGGJPhase::BluePhase
#define INITIAL_BULLET_TYPE gsGGJBulletType::Normal


#define ENEMY_SPAWNER_COOLDOWN 1.6f
#define ENEMY_SPAWNER_TIMER 0.6f

#define WAVE_2_TIME 40
#define WAVE_3_TIME WAVE_2_TIME + 60
#define WAVE_4_TIME WAVE_3_TIME + 70
#define WAVE_5_TIME WAVE_4_TIME + 80
#define WAVE_6_TIME WAVE_5_TIME + 90
#define WAVE_7_TIME WAVE_6_TIME + 100


#endif