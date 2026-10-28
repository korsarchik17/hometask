#include "menu_items.hpp"
#include "menu_functions.hpp"
#include <cstddef>

const menu::MenuItem menu::SUBJ_EXIT = {
    "0 - Выйти в предыдущее меню",
    menu::subj_exit,
    &menu::FIRST_CLASS
};

const menu::MenuItem menu::PE = {
    "4 - Я люблю физкультуру",
    menu::pe,
    &menu::FIRST_CLASS
};

const menu::MenuItem menu::MATH = {
    "3 - Математика",
    menu::math,
    &menu::FIRST_CLASS
};

const menu::MenuItem menu::LITERATURE = {
    "2 - Русская литература",
    menu::literature,
    &menu::FIRST_CLASS
};

const menu::MenuItem menu::RUSSIAN = {
    "1 - Русский язык",
    menu::russian,
    &menu::FIRST_CLASS
};

namespace {
    const menu::MenuItem* const first_class_children[] = {
        &menu::SUBJ_EXIT,
        &menu::RUSSIAN,
        &menu::LITERATURE,
        &menu::MATH,
        &menu::PE
    };

    const int first_class_size = sizeof(first_class_children) / sizeof(first_class_children[0]);
}

const menu::MenuItem menu::FIRST_CLASS = {
    "1 - Изучать предметы 1-го класса",
    menu::show_menu,
    &menu::WHICH_CLASS,
    first_class_children,
    first_class_size
};

const menu::MenuItem menu::SECOND_CLASS = {
    "2 - Изучать предметы 2-го класса",
    menu::second_class,
    &menu::WHICH_CLASS
};

const menu::MenuItem menu::THIRD_CLASS = {
    "3 - Изучать предметы 3-го класса",
    menu::third_class,
    &menu::WHICH_CLASS
};

const menu::MenuItem menu::CLASS_EXIT = {
    "0 - Выйти в главное меню",
    menu::class_exit,
    &menu::WHICH_CLASS
};

namespace {
    const menu::MenuItem* const which_class_children[] = {
        &menu::CLASS_EXIT,
        &menu::FIRST_CLASS,
        &menu::SECOND_CLASS,
        &menu::THIRD_CLASS,
    };

    const int which_class_size = sizeof(which_class_children) / sizeof(which_class_children[0]);
} 

const menu::MenuItem menu::WHICH_CLASS = {
    "1 - Предметы какого класса школы вы хотите учить?",
    menu::show_menu,
    &menu::MAIN,
    which_class_children,
    which_class_size
};

const menu::MenuItem menu::EXIT = {
    "0 - Я уже закончил школу и все знаю",
    menu::exit,
    &menu::MAIN
};

namespace {
    const menu::MenuItem* const main_children[] = {
        &menu::EXIT,
        &menu::WHICH_CLASS
    };

    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const menu::MenuItem menu::MAIN = { nullptr, menu::show_menu, nullptr, main_children, main_size};





