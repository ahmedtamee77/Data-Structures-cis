
#include <iostream>
using namespace std;
class Array{
private:
    long long size; 
    int length; 
    int* items;

public :
    Array(int arraysize) {
        this->size = arraysize; 
        this->length = 0;
        this->items = new int[arraysize]; 
    }
    void fill() {
        int no_of_array; 
        cout << "How many numbers of you want\n"; 
        cin >> no_of_array; 
        if (no_of_array > size) {
            cout << "you cant do this man "; 
            return; 
        }
        else {
            for (int i = 0; i < no_of_array; i++) {
                cout << "enter item number" << i+1 << "\n";
                cin >> items[i]; 
                length++;
            }
        }
    }
    void getinfo() {
        cout << "this is array display\n";
        for (int i = 0; i < length; i++) {
            cout << items[i] << "\t";
        }
        cout << "\n";
        cout << "the lenght of this array is " << length << "\t" << "while size is" << size << "\t";
        cout << "\n";
        //   cout << "the size of this array" << size << "\t";
    }
    int getitem(int key) {
        int index= -1; 
        for (int i = 0; i < length; i++) {
            if (items[i] == key) {
                index = items[i];
            
    

            }
            return key;
            break;
        }
       
    }

    void newitem(int newitem) {
        if (length < size) {
            items[length]= newitem; 
            length++; 
        }
        else {
            cout << "cant add more items to this array";
        }
    }

};
int main()
{
    int arraysize; 
    cout << "enter array size\n";
    cin >> arraysize; 
    Array r1(arraysize);
    r1.fill(); 
    r1.getinfo();
    int y; 
    int x; 
    cout << "enter 1 for search for new items or 0 to end\n"; 
    cin >> x; 
    if (x == 1) {
        int key; 
        cout << "enter index to search\n";
        cin >> key; 
        int index = r1.getitem(key); 
     
        if (index== -1) {
            cout << "the item is not found";
        }
        else {
            cout << "we found the item at position" <<index<< "\n";
        }
        cout << "\n";
    }
    cout << "wanna add new items  1 for yes or 0 for n ??\n"; 
    cin >> y;
    if ( y==1 ) {
        int newitem;
        cout << "enter your new item\n";
        cin >> newitem;
        r1.newitem(newitem);
        r1.getinfo();
    }
    else if (y == 0) {
        cout << "thanks you";
    }
  

    system("pause>0");
}
