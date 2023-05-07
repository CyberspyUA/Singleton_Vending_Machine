#pragma once
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
class Drink {
private:
    static Drink* instance;

    Drink() = default;

public:
    static Drink* getInstance() {
        if (!instance) {
            instance = new Drink;
        }
        return instance;
    }

    void prepare(std::string const& name, int const& cup_size, int const& sugar_spoons) const {
        std::cout << "����� " << name << ", ������� � " << cup_size << " �� ��������� �� " << sugar_spoons << " ������� �����." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(5));
        std::cout << "Done!" << std::endl;
    }
};