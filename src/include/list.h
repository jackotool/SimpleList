#include <iostream>
#include <vector>

using namespace std;

class List{
    private:    // class
    protected:  //class and descendant
    public:
        List(){ // constructor

        }
        ~List(){// destructor

        }
        vector<string> list; 
        string name;

    
        void print_menu();
        void print_list();
        void add_item();
        void delete_item();

        

};