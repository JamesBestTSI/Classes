#ifndef WEAPON_H
#define WEAPON_H
#include <string>

enum WeaponSizes
{
    Small,
    Medium,
    Large
};

class Weapon
{
    private:
        std::string Name = "Test";
        std::string Type;
        bool DualHanded;
        int Durability;
        int Damage;
        WeaponSizes Size;
        int Weight;
        std::string Model;
        std::string Material;
        std::string Sound;
        int Cost;

    public:
        Weapon();
        Weapon(std::string name);
        Weapon(std::string name, std::string type, bool dualHanded, int durability, int damage, WeaponSizes size, int weight, std::string model, std::string material, std::string sound, int cost);
        ~Weapon();
        void Collect();
        void Drop();
        void DealDamage(int dmg);
        void Break();
        void Upgrade();

        std::string GetName();
        std::string GetType();
        bool GetDualHanded();
        int GetDurability();
        int GetDamage();
        WeaponSizes GetWeaponSize();
        int GetWeight();
        std::string GetModel();
        std::string GetMaterial();
        std::string GetSound();
        int GetCost();

        void SetName(std::string name);
        void SetType(std::string type);
        void SetDualHanded(bool dualHanded);
        void SetDurability(int durability);
        void SetDamage(int damage);
        void SetWeaponSize(WeaponSizes size);
        void SetWeight(int weight);
        void SetModel(std::string model);
        void SetMaterial(std::string material);
        void SetSound(std::string sound);
        void SetCost(int cost);

    // protected:
};
#endif