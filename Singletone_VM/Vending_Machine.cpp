#include <iostream>
#include "H_Files/Vending_Machine.h"
void VendingMachine::drink_options_show() const
{
    std::cout << "1)����:\t 2)���\t 3)�����"
        << "  *���������\t  *������\t  *����i������\n"
        << "  *���������\t  *�������\t  *�����\n"
        << "  *������i��\t  *��������\t  *������� �������\n";
}
void VendingMachine::cacao_options_show() const
{
    std::cout
        << "  1)����i������\n"
        << "  2)�����\n"
        << "  3)������� �������\n";

}
void VendingMachine::tea_options_show() const
{
    std::cout
        << "  1)������\n"
        << "  2)�������\n"
        << "  3)��������\n";
}
void VendingMachine::coffee_options_show() const
{
    std::cout
        << "  1)���������\n"
        << "  2)���������\n"
        << "  3)������i��\n";
}

void VendingMachine::manual_show() const
{

    std::cout << "\t ���� �����, ����i�� � ����i����� ����� �i� 1 �� 4.\n"
        << "\t �������i ���i����:\n"
        << "1) ������ ���i�\n"
        << "2) �������� ��i ����\n"
        << "3) �������� ���� ���i���\n"
        << "4) ����� � ��������� ��������.\n";
}
void VendingMachine::introduction_show() const
{
    std::cout << "\t\t�i��� �������� ��i����! \n"
        << "\t �� ���i���� ��������� �������� ������i� Struk.corp\n"
        << "\t � ����� ��� ���� �����. �� ������ ������� ���� � ��� ��� �i��������� �� �������� �������.\n"
        << "\t ���� ���i� ���� ������, � ������ �������� ����.\n"
        << "\t ��������� ���� ������ ����� �� �����.\n"
        << "\t ���� � ��� ���������� �������, �� ������ �i�������� �� ���i��������, �������� ����� 3\n";
}