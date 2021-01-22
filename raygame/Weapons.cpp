#include "Weapons.h"
#include "Actor.h"
#include <iostream>
#include <fstream>



int weapons()
{
    Actor player = Actor();
    player.orangeDamage = 10;
    player.bananaDamage = 20;
    player.cherryDamage = 50;


    std::fstream file;
    file.open("save.txt", std::ios::out | std::ios::binary || std::ios::app);
    file.write((char*)&player, sizeof(Actor));
    if (!file.is_open())
    {
        return 1;
    }

    file.seekg(sizeof(Actor) * 2, std::ios::beg);

    file << player.m_health << std::endl;
    file << player.orangeDamage;
    file << player.bananaDamage;
    file << player.cherryDamage;
    file.close();
}