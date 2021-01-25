#pragma once
#include "Actor.h"
#include "Sprite.h"

class Arena :
	public Actor
{
public:
	Arena(float x, float y, float collisionRadius, const char* spriteFilePath, float maxSpeed);

	virtual void update(float deltaTime) override;
	virtual void draw() override;

private:
	Sprite m_sprite;
};

