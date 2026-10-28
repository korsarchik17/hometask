#include "menu_functions.hpp"
#include <iostream>
#include <cstdlib>

const menu::MenuItem* menu::show_menu(const MenuItem* current) {
    std::cout << "Школа приветствует тебя, мой ученик!" << std::endl;
    for (int i=1; i < current->children_count; i++) {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Школа > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;

    return current->children[user_input];
}

const menu::MenuItem* menu::exit(const MenuItem* current) {
    std::exit(0);
}

const menu::MenuItem* menu::which_class(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const menu::MenuItem* menu::first_class(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const menu::MenuItem* menu::second_class(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const menu::MenuItem* menu::third_class(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const menu::MenuItem* menu::class_exit(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}

const menu::MenuItem* menu::russian(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const menu::MenuItem* menu::literature(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const menu::MenuItem* menu::math(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const menu::MenuItem* menu::pe(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const menu::MenuItem* menu::subj_exit(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}


