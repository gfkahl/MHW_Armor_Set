#include <iostream>
#include <fstream>
#include <sstream>
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
        std::string armorName;
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


        void loadFromID(int id)
        {
            std::fstream fs;
            std::string temp;
            // Open CSV
            fs.open("armor_base.csv");
            std::string line;

            // Go to the line of the object ID
            for(int i=0; i<id; i++)
            {
                getline(fs, line);
            }

            // Load line into string stream
            stringstream ss (line);

            // Parse the line by ',' and load them into class variables
            getline(ss, temp,','); // Skip ID
            getline(ss, temp,','); // Save name in temp
            // armorName = temp;

            getline(ss, temp,','); // Skip Rarity 
            getline(ss, temp,','); // Save armorType
            if (temp == "head")
            {
                type = armorType::HEAD;
            }
            else
            {
                cout << "Error, armor ID is not of a headgear.";
                return;
            }

            getline(ss, temp, ','); // Skip 
            getline(ss, temp, ','); // Save slot1
            slot1 = stoi(temp);
            getline(ss, temp, ','); // Save slot2
            slot2 = stoi(temp); 
            getline(ss, temp, ','); // Save slot3
            slot3 = stoi(temp); 
            getline(ss, temp, ','); // Save armorBase
            armorBase = stoi(temp);
            getline(ss, temp, ','); // Save armorMax
            armorMax = stoi(temp);
            getline(ss, temp, ','); // Skip
            getline(ss, temp, ','); // Save fireRes
            fireRes = stoi(temp);
            getline(ss, temp, ','); // Save waterRes
            waterRes = stoi(temp);
            getline(ss, temp, ','); // Save thunderRes
            thunderRes = stoi(temp);
            getline(ss, temp, ','); // Save iceRes
            iceRes = stoi(temp);
            getline(ss, temp, ','); // Save dragonRes
            dragonRes = stoi(temp);

            
        }
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
