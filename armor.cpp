#include <iostream>
#include <string.h>

using namespace std;


class Helmet
{
    public:
        double armorValue;
    
};

class Gloves
{
    public:
        double armorValue;
};

class Torso
{
    public:
        double armorValue;
};

class Legs
{
    public:
        double armorValue;
};

class Boots
{
    public:
        double armorValue;
};

class armorSet
{
    public:
        Helmet helmet;        
        Torso torso;
        Gloves gloves;
        Legs legs;
        Boots boots;

        double armorValue = helmet.armorValue + torso.armorValue + gloves.armorValue + legs.armorValue + boots.armorValue;

};
