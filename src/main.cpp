#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    while (true) {
        char pre = '$';

        printf("%c ", pre);

        string command; cin >> command;

        if (command == "exit") {
            return 0;
        } else {
            system(command.c_str());
        }    
    }
}
