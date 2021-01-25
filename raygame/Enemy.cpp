#include <cstdlib>
#include <ctime>
#include "Enemy.h"

Enemy::Enemy(const char* name, float health, float damage, float defense, Sprite* sprite)
{
	m_name = name;
	m_health = health;
	m_damage = damage;
	m_defense = defense;
	m_sprite = sprite;
}

float Enemy::attack(Actor* other)
{
	srand(static_cast<unsigned int>(time(0)));  // seed random number generator based on current time

	int randomNumber = rand();
	int randomDamage = (randomNumber % 6) + 1;
	return other->takeDamage(getDamage() + randomDamage);
}

void Enemy::onCollision(Actor* other)
{

	Actor::onCollision(other);
}

void Enemy::update(float deltaTime)
{

	Actor::update(deltaTime);
}

void Enemy::draw()
{

	Actor::draw();
}