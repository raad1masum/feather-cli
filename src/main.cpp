#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    char pre = '$';

    printf("%c ", pre);
    
    string command; cin >> command;
    system(command.c_str());
}
