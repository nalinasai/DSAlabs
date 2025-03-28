#include <cstring>
#include <string>
#include <iostream>
using namespace std;

struct HashTable
{
    int MAX_LENGTH = 3;
    string *passwords = new string[MAX_LENGTH];

    void intialize_hashtable()
    {
        for (int i = 0; i < MAX_LENGTH; i++)
        {
            passwords[i].clear();
        }
    }
    bool isFull()
    {
        bool full = true;
        for (int i = 0; i < MAX_LENGTH; i++)
        {
            if (passwords[i].empty())
            {
                full = false;
            }
        }
        return full;
    }
    int hashfunc(string user_name)
    {
        int sum = 0;
        int hash = 0;
        // <--- ADD YOUR CODE HERE --->
        for(char ch: user_name){
            sum = sum + static_cast<int>(ch);
        }

        hash = sum % MAX_LENGTH;

        return hash;
    }
    bool is_slot_empty(int hash)
    {
        bool empty = passwords[hash].empty();
        return empty;
    }
    int insert(string user_name, string user_password)
    {
        int hash;
        bool empty;
        hash = hashfunc(user_name);
        empty = is_slot_empty(hash);
        // <--- ADD YOUR CODE HERE --->
        if(empty){
            passwords[hash] = user_password;
            return 0;
        }
        else{
            return 1;
        }
    }
    int hash_lookup(string user_name)
    {
        int hash;
        bool empty;
        hash = hashfunc(user_name);
        empty = is_slot_empty(hash);
        // <--- ADD YOUR CODE HERE --->
        if(!empty){
            cout<<passwords[hash]<<endl;
            return 0;
        }
        else{
            return 1;
        }
    }
    int delete_item(string user_name)
    {
        int hash;
        bool empty;
        hash = hashfunc(user_name);
        empty = is_slot_empty(hash);
        if (empty)
        {
            return 1;
        }
        passwords[hash].clear();
        return 0;
    }
    void print_hashtable()
    {
        for (int i = 0; i < MAX_LENGTH; i++)
        {
            cout << "[" << i << "]-->" << passwords[i] << "\n";
        }
    }
};

int main()
{
    HashTable *hashtbl = new HashTable;
    hashtbl->intialize_hashtable();
    cout << hashtbl->isFull() << "\n";

    int command = 0;
    string user_name;
    string password;
    while (command != -1)
    {
        /* code */
        cin >> command;
        switch (command)
        {
        case 1:
            /* insert the new item*/
            cin >> user_name;
            cin >> password;
            cout << "Inserting " << user_name << "...\n";
            cout << (hashtbl->insert(user_name, password) ? "Failed" : "Succeeded") << "\n";
            break;
        case 2:
            /* delete item */
            cin >> user_name;
            cout << "Deleting " << user_name << "...\n";
            cout << (hashtbl->delete_item(user_name) ? "Failed" : "Succeeded") << "\n";
            break;
        case 3:
            /* hash lookup password*/
            cin >> user_name;
            cout << "Looking up " << user_name << "...\n";
            cout << (hashtbl->hash_lookup(user_name) ? "Not found" : "Found") << "\n";
            break;
        case 4:
            hashtbl->print_hashtable();
            break;
        case -1:
            break;
        }
    }
    return 0;
}



/*
nput	
1
User1
Password1
4
1
User2
Password2
1
User3
Password3
1
User4
Password4
4
3
User1
2
User1
-1
*/


/*
result
0
Inserting User1...
Succeeded
[0]-->
[1]-->
[2]-->Password1
Inserting User2...
Succeeded
Inserting User3...
Succeeded
Inserting User4...
Failed
[0]-->Password2
[1]-->Password3
[2]-->Password1
Looking up User1...
Password1
Found
Deleting User1...
Succeeded
*/