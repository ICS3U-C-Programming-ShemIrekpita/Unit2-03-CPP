// Created by: Shem
// Created on: 9/28/2025
// This program is to take pizza orders
// with user input
// Copyright 2025 Shem

#include <iomanip>
#include <iostream>

int main() {
    const float HST = 0.13;
    const float LABOUR_COST = 2.00;
    const float RENTAL_COST = 2.25;
    const float INGREDIENT_COST = 1.5;

    float size, subtotal, tax, total;

    std::cout << "Choose pizza size (Large = 18, Medium = 16, Small = 12): ";
    std::cin >> size;

    subtotal = LABOUR_COST + RENTAL_COST + INGREDIENT_COST * size;
    std::cout << "Subtotal = $" << std::fixed
        << std::setprecision(2) << subtotal << std::endl;

    tax = subtotal * HST;
    std::cout << "Tax = $" << std::fixed
        << std::setprecision(2) << tax << std::endl;

    total = subtotal + tax;
    std::cout << "Total = $" << std::fixed
        << std::setprecision(2) << total << std::endl;
}
