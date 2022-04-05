#include <iostream>
#include <string>
#include "weapon.h"


Weapon::Weapon(){};
Weapon::Weapon(std::string name) { Name = name; };
Weapon::Weapon(std::string name, std::string type, bool dualHanded, int durability, int damage,
               WeaponSizes size, int weight, std::string model, std::string material, std::string sound,
               int cost){
                Name = name;
                Type = type;
                DualHanded = dualHanded;
                Durability = durability;
                Damage = damage;
                Size = size;
                Weight = weight;
                Model = model;
                Material = material;
                Sound = sound;
                Cost = cost;};
Weapon::~Weapon(){};
void Weapon::Collect() { std::cout << "You just collected " << Name << std::endl; };
void Weapon::Drop() { std::cout << "You just dropped " << Name << std::endl; };
void Weapon::DealDamage(int dmg) { std::cout << "The " << Name << " dealt " << dmg << std::endl; };
void Weapon::Break() { std::cout << "The " << Name << " broke!" << std::endl; };
void Weapon::Upgrade() { std::cout << "You just upgraded " << Name << std::endl; };

std::string Weapon::GetName()       { return Name; };
std::string Weapon::GetType()       { return Type; };
bool Weapon::GetDualHanded()        { return DualHanded; };
int Weapon::GetDurability()         { return Durability; };
int Weapon::GetDamage()             { return Damage; };
WeaponSizes Weapon::GetWeaponSize() { return Size; };
int Weapon::GetWeight()             { return Weight; };
std::string Weapon::GetModel()      { return Model; };
std::string Weapon::GetMaterial()   { return Material; };
std::string Weapon::GetSound()      { return Sound; };
int Weapon::GetCost()               { return Cost; };

void Weapon::SetName(std::string name)          { Name = name; };
void Weapon::SetType(std::string type)          { Type = type; };
void Weapon::SetDualHanded(bool dualHanded)     { DualHanded = dualHanded; };
void Weapon::SetDurability(int durability)      { Durability = durability; };
void Weapon::SetDamage(int damage)              { Damage = damage; };
void Weapon::SetWeaponSize(WeaponSizes size)    { Size = size; };
void Weapon::SetWeight(int weight)              { Weight = weight; };
void Weapon::SetModel(std::string model)        { Model = model; };
void Weapon::SetMaterial(std::string material)  { Material = material; };
void Weapon::SetSound(std::string sound)        { Sound = sound; };
void Weapon::SetCost(int cost)                  { Cost = cost; };
