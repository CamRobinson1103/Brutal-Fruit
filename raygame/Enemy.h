#pragma once
#include "Actor.h"

class Enemy :
	protected Actor
{
public:
	Enemy();
	Enemy(const char* name, float health, float damage, float defense);

	void onCollision(Actor* other);
	void update(float deltaTime) override;
	void draw() override;

private:
	float m_health;
	float m_damage;

	virtual float attack(Actor* other);
};

