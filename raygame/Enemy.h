#pragma once
#include "Actor.h"

class Enemy :
	public Actor
{
public:
	Enemy(const char* name, float health, float damage, float defense, Sprite* sprite);

	void onCollision(Actor* other);
	virtual void update(float deltaTime) override;
	virtual void draw() override;

private:
	float m_health;
	float m_damage;
	Sprite* m_sprite;

	virtual float attack(Actor* other) override;
};

