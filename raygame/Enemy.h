#pragma once
#include "Actor.h"
class Enemy :
	protected Actor
{
public:
	Enemy();
	Enemy(float x, float y, float collisionRadius, char icon, float maxSpeed);

	void onCollision(Actor* other);
	void update(float deltaTime) override;
	void draw() override;

private:
	float m_health;
	float m_damage;
};

