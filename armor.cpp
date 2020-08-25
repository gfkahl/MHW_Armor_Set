#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

enum struct armorType
{
    HEAD,
    CHEST,
    ARMS,
    WAIST,
    LEGS
};

class Head
{
    public:
        armorType type = armorType::HEAD;
        int armorBase;
        int armorMax;
        int slot1;
        int slot2;
        int slot3;
        int fireRes;
        int waterRes;
        int thunderRes;
        int iceRes;
        int dragonRes;


};

class Chest
{
    public:
        armorType type = armorType::CHEST;
        int armorBase;
        int armorMax;
        int slot1;
        int slot2;
        int slot3;
        int fireRes;
        int waterRes;
        int thunderRes;
        int iceRes;
        int dragonRes;
};

class Arms
{
    public:
        armorType type = armorType::ARMS;
        int armorBase;
        int armorMax;
        int slot1;
        int slot2;
        int slot3;
        int fireRes;
        int waterRes;
        int thunderRes;
        int iceRes;
        int dragonRes;
};

class Waist
{
    public:
        armorType type = armorType::WAIST;
        int armorBase;
        int armorMax;
        int slot1;
        int slot2;
        int slot3;
        int fireRes;
        int waterRes;
        int thunderRes;
        int iceRes;
        int dragonRes;
};

class Legs
{
    public:
        armorType type = armorType::LEGS;
        int armorBase;
        int armorMax;
        int slot1;
        int slot2;
        int slot3;
        int fireRes;
        int waterRes;
        int thunderRes;
        int iceRes;
        int dragonRes;
};

class armorSet
{
    public:
        Head helmet;        
        Chest torso;
        Arms gloves;
        Waist legs;
        Legs boots;

};
