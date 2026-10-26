#include <iostream>
#include <vector>

//g++ main.cpp -o a.exe

using namespace std;

void clearScreen() {
    // \033[2J clears the screen, \033[1;1H moves the cursor to the top-left
    std::cout << "\033[2J\033[1;1H" << std::flush;
}
void print_menu(string name);
void print_list();
void add_item();
void delete_item();

vector<string> list; 
string name;

int main(int arg_count,char *args[]){
    clearScreen();
    if (arg_count>1){
        name = args[1];
        print_menu(name);
    }
    else{
        cout<< "Username not supplied... exiting the program." << endl;
    }
   

   
    return 0;
}

void print_menu(string name)
{
    int choice;
    cout<<"\n\n";
    cout<<"*******************************\n";
    cout<<"1    Print List.\n";
    cout<<"2    Add to List.\n"; 
    cout<<"3    Delete from List.\n";
    cout<<"4    Quit.\n\n";
    cout<<" Enter your choice and press ENTER \n";

    cin>>choice;

    if ((choice) == 4){
        exit(0);
    }else{
        cout<<"No choices\n";
    }

    return;
}

void print_list()
{

}

void add_item()
{
    cout<<"\n\n\\n";
    cout<<"*** Additem*** \n";
    cout<<"Type in an item and ptress ENTER: ";

    string item;
    cin>>item;
    list.push_back(item);
    cout<<"Successfully added an item to the list.\n\n";
    cin.clear();

    print_menu(name);

}

void delete_item()
{
    cout<<"*** Delete item*** \n";
    cout<<"Select an item index to delete, ptress ENTER:\n ";
    if (list.size()> 0){
        for (int i = 0; i < list.size(); i++)
        {
            cout<< i << ": "<<list[i];
        }
        

    }


}
