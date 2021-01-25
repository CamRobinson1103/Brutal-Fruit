#include <raymath.h>
#include "Arena.h"

Arena::Arena(float x, float y, float collisionRadius, const char* spriteFilePath, float maxSpeed)
{
	m_sprite =* new Sprite("raygame/Assests/battlearena.png");
}

void Arena::update(float deltaTime)
{

	Actor::update(deltaTime);
}

void Arena::draw()
{

	Actor::draw();
}