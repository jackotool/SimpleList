#include "include/list.h"

void List::print_menu()
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
    }
    else if (choice == 3){
        delete_item();
    }
    else if (choice == 2){
            add_item();
    }
    else if (choice == 1){
        print_list();
    }
    else{
        cout<<"No choices\n";
    }

    return;
}

void List::print_list()
{
    cout<<"*******************************\n";
    cout<<" *** Print List ***\n";

    for (unsigned int i = 0; i < list.size(); i++)
        {
            cout<< " * "<< list[i]<<"\n";
        } 

    cout<<" M - Menu \n";
    char choice;
    cin>>choice;
    if (choice == 'M' || choice =='m'){
        print_menu();
    }else{
        cout<< "Invaliod menu choice!  Quitting.\n";
        exit(0);
    }

}

void List::add_item()
{
    cout<<"\n\n";
    cout<<"*** Additem*** \n";
    cout<<"Type in an item and ptress ENTER: ";

    string item;
    cin>>item;
    list.push_back(item);
    cout<<"Successfully added an item to the list.\n\n";
    cin.clear();

    print_menu();

}

void List::delete_item()
{
    cout<<"*** Delete item*** \n";
    cout<<"Select an item index to delete, ptress ENTER:\n ";
    if (list.size()> 0){
        for (unsigned int i = 0; i < list.size(); i++)
        {
            cout<< i << ": "<<list[i] << endl;
        }
      }
      else {
        cout << "Not items to delete! \n";
      }
      print_menu();
}
