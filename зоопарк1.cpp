#include <iostream>
#include <string>

// Base class "Animal"
class Animal {
public:
    std::string name;

    // Add animal to the zoo
    virtual void AddToZoo() {
        std::cout << "Added animal: " << name << std::endl;
    }

    // Remove animal from the zoo
    virtual void RemoveFromZoo() {
        std::cout << "Removed animal: " << name << std::endl;
    }

    // Eat
    virtual void Eat() {
        std::cout << name << " is eating" << std::endl;
    }

    // Swim
    virtual void Swim() {
        std::cout << name << " is swimming" << std::endl;
    }

    // Make sound
    virtual void MakeSound() {
        std::cout << name << " makes sounds" << std::endl;
    }

    // Pet
    virtual void Pet() {
        std::cout << "Petted animal: " << name << std::endl;
    }
};

// Class "Lion"
class Lion : public Animal {
public:
    int maneLength;
    bool isKing;

    // Roar
    void Roar() {
        std::cout << name << " roars" << std::endl;
    }

    // Overridden method - eat
    void Eat() override {
        std::cout << name << " is a carnivorous animal, hunts and eats meat" << std::endl;
    }
};

// Class "Penguin"
class Penguin : public Animal {
public:
    int swimDepth;
    bool isEmperor;

    // Dance
    void Dance() {
        std::cout << name << " dances" << std::endl;
    }

    // Overridden method - swim
    void Swim() override {
        std::cout << name << " swims, using its wings as flippers" << std::endl;
    }
};

// Class "Crocodile"
class Crocodile : public Animal {
public:
    int numberOfTeeth;
    bool isDangerous;

    // Hide underwater
    void HideUnderwater() {
        std::cout << name << " hides underwater" << std::endl;
    }

    // Overridden method - make sound
    void MakeSound() override {
        std::cout << name << " makes a characteristic roar" << std::endl;
    }
};

int main() {
    Lion lion;
    lion.name = "Lion";
    lion.maneLength = 20;
    lion.isKing = true;

    Penguin penguin;
    penguin.name = "Penguin";
    penguin.swimDepth = 100;
    penguin.isEmperor = true;

    Crocodile crocodile;
    crocodile.name = "Crocodile";
    crocodile.numberOfTeeth = 80;
    crocodile.isDangerous = true;

    lion.AddToZoo();
    lion.Roar();
    lion.Eat();

    penguin.AddToZoo();
    penguin.Dance();

    crocodile.AddToZoo();
    crocodile.HideUnderwater();

    return 0;
}