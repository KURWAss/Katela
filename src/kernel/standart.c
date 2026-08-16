#include "../../include/standart.h"
#include "../drivers/vga.h"
#include "../drivers/speaker.h"

void init() {
    init_speaker();
    clear();

    print("Welcome to ");
    print(DISTRO);
    print("!\nWrite help for cmd list! ");
}
