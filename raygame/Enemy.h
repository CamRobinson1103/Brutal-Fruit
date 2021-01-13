#pragma once

#include "Vector2.h"
#include "Matrix3.h"

class Sprite;
class Actor;

class Enemy
{
public:
	Enemy();
	Enemy(float x, float y, float collisionRadius, char icon, float maxSpeed);
	bool checkTargetSighted(Actor* target, float maxAngle, float maxDistance);
	void update(float deltaTime);
	void draw();

private:
	float m_health;
	float m_damage;
};