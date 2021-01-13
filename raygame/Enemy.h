#pragma once

#include "Vector2.h"
#include "Matrix3.h"
#include "Actor.h"

class Sprite;

class Enemy : Actor
{
public:
	Enemy();
	Enemy(float x, float y, float collisionRadius, char icon, float maxSpeed, float health, float damage);
	void onCollision(Actor* other);
	bool checkTargetSighted(float maxAngle, float maxDistance);
	void update(float deltaTime);
	void draw();

private:
	float m_health = 100;
	float m_damage = 7;
};