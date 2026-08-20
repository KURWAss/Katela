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

void help() {
    print("off - turn off cpu to safety power off\n");
	print("echo - prints arguments\n");
	print("info - prints information about ts\n");
	print("clear or cls - clears all console\n");
	print("swiss - open text editor\n");
	print("create {name} - create file\n");
	print("see - list files\n");
	print("set {name} {text} - write to file\n");
	print("get {name} - read file\n");
	print("hi - hello ^_^\n");
	print("beep - plays a sound\n");
    print("rename {old} {new} - renames file\n");
	print("rm {name} - removes file\n");
    print("panic - requests system panic");
}
