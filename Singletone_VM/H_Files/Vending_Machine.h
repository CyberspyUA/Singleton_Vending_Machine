#pragma once
#include "Drink.h"
#include <string>
class VendingMachine {
public:
    void makeDrink(std::string const& name, int const& cup_size, int const& sugar_spoons) const {
        Drink const* drink = Drink::getInstance();
        drink->prepare(name, cup_size, sugar_spoons);
    }
    bool sugar_suggestion() const
    {

        bool is_sugar_needed{};
        std::cout << "����� ����i���?\n";
        std::cout << "1 - ���, 0 - �i \n";
        std::cin >> is_sugar_needed;
        if (is_sugar_needed == 1 || is_sugar_needed == 0)
            return is_sugar_needed;
        else
            return false;

    }
    int cup_suggestion() const
    {
        while (true)
        {
            int cup_choice{};
            std::cout << "\t����i�� ����i� ������� ����� ��������������:\n"
                << "1) 100 ��\n"
                << "2) 200 ��\n"
                << "3) 300 ��\n"
                << "4) 400 ��\n"
                << "5) 500 ��\n";
            std::cin >> cup_choice;
            switch (cup_choice)
            {
            case 1:
                return 100;
            case 2:
                return 200;
            case 3:
                return 300;
            case 4:
                return 400;
            case 5:
                return 500;
            default:
            {
                std::cout << "������� �� ��������� ��������. ��������� �� ���.\n";
                break;
            }
            }
        }
    }
    int sugar_adding() const
    {
        int new_sugar_spoons_count{ 1 };
        while (true)
        {
            std::cout << "����� ���������? " << "����� ����� - " << new_sugar_spoons_count << "\n";
            std::cout << "1 - ���, 0 - �i" << "\n";
            int choice{};
            std::cin >> choice;
            if (choice == 1)
            {
                return new_sugar_spoons_count;
            }
            else if (choice == 0)
            {
                new_sugar_spoons_count++;
                continue;
            }
            else
            {
                std::cout << "������� ���i��� ��������. ��������� �� ���.";
            }
        }
    }
    void drink_options_show() const;
    void cacao_options_show() const;
    void tea_options_show() const;
    void coffee_options_show() const;
    void manual_show() const;
    void introduction_show() const;
};