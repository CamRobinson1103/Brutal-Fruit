#include <cmath>
#include "Enemy.h"
#include "raylib.h"
#include "Sprite.h"

Enemy::Enemy(float x, float y, float collisionRadius, char icon = ' ', float maxSpeed = 1, float health, float damage)
{
	m_health = health;
	m_damage = damage;
}