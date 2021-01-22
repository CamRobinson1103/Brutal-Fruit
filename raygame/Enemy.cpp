#include "Enemy.h"
#include <cstdlib>
#include <ctime>

Enemy::Enemy()
{

}

Enemy::Enemy(const char* name, float health, float damage, float defense)
{
}

float Enemy::attack(Actor* other)
{
	srand(static_cast<unsigned int>(time(0)));  // seed random number generator based on current time

	int randomNumber = rand(); 
	int randomDamage = (randomNumber % 6) + 1;
	return takeDamage(getDamage() + randomDamage);

	
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