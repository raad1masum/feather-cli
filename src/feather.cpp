#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void color_red();
void color_green();
void color_blue();
void color_cyan();
void color_magenta();
void color_reset();

int main(int argc, char *argv[]) {
    char *user = getenv("USER");
    char *appdata = getenv("APPDATA");
    char pre = '$';
    
    while (true) {
        color_red();
        printf("%s ", user);
        color_green();
        printf("%c ", pre);
        color_reset();

        string command; cin >> command;

        if (command == "exit") {
            return 0;
        } else {
            system(command.c_str());
        }    
    }
}

void color_red() {
  printf("\033[1;31m");
}

void color_green() {
  printf("\033[1;32m");
}

void color_blue() {
  printf("\033[1;34m");
}

void color_cyan() {
  printf("\033[1;36m");
}

void color_magenta() {
  printf("\033[1;35m");
}

void color_reset() {
  printf("\033[0m");
}
