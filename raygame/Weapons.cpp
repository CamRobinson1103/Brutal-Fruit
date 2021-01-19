#include "Weapons.h"
#include "Actor.h"
#include <iostream>
#include <fstream>



int main()
{
    Actor player = Actor();
    player.swordDamage = 10;
    player.gunDamage = 20;
    player.bombDamage = 50;


    std::fstream file;
    file.open("save.txt", std::ios::out | std::ios::binary || std::ios::app);
    file.write((char*)&player, sizeof(Actor));
    if (!file.is_open())
    {
        return 1;
    }

    file.seekg(sizeof(Actor) * 2, std::ios::beg);

    file << player.health << std::endl;
    file << player.swordDamage;
    file << player.gunDamage;
    file << player.bombDamage;

    file << enemy.health << std::endl;
    file << enemy.swordDamage;
    file << enemy.gunDamage;
    file << enemy.bombDamage;
    file.close();
}