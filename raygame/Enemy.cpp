#include "Enemy.h"

Enemy::Enemy()
{

}

Enemy::Enemy(float x, float y, float collisionRadius, char icon = ' ', float maxSpeed)
{
	
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