#include<iostream>
#include"IniFile.h"

using namespace std;

int main(){
    IniFile ini;
    ini.load("./main.ini");
    ini.show();
    ini.save("./temp.ini");
    return 0;
}