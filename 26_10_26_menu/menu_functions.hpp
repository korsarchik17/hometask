#pragma once
#include "menu.hpp"

namespace menu {
    const MenuItem* show_menu(const MenuItem* current);

    const MenuItem* exit(const MenuItem* current);
    const MenuItem* which_class(const MenuItem* current);

    const MenuItem* first_class(const MenuItem* current);
    const MenuItem* second_class(const MenuItem* current);
    const MenuItem* third_class(const MenuItem* current);
    const MenuItem* class_exit(const MenuItem* current);

    const MenuItem* russian(const MenuItem* current);
    const MenuItem* literature(const MenuItem* current);
    const MenuItem* math(const MenuItem* current);
    const MenuItem* pe(const MenuItem* current);
    const MenuItem* subj_exit(const MenuItem* current);
}
