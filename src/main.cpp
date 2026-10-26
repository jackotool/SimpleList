#include "include/list.h"

//g++ main.cpp -o a.exe


int main(int arg_count,char *args[]){
    //clearScreen();
    if (arg_count>1){
        List simpleList;
        simpleList.name = args[1];
        simpleList.print_menu();
    }
    else{
        cout<< "Username not supplied... exiting the program." << endl;
    }
   
  
    return 0;
}
