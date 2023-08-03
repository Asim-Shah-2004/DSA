#include <iostream>
using namespace std;


//linear probing is used
class Hash {
    int cap;
    int *arr;
    int size;

private:
    int hash(int data) {
        return data % cap;
    }

public:
    Hash(int cap) {
        this->cap = cap;
        arr = new int[cap];
        size = 0;

        // Initializing values initially to -1 (indicating empty slot)
        for (int i = 0; i < cap; i++) {
            arr[i] = -1;
        }
    }

    // Insert an element into the hash table
    void insert(int data) {
        int i = hash(data);

        if (size == cap) {
            cout << "Cannot insert data. Hash table is at full capacity." << endl;
            return;
        }

        // Linear probing to find the next available slot
        while (arr[i] != -1 && arr[i] != -2 && arr[i] != data) {
            i = (i + 1) % cap;
        }

        // If the element already exists in the table, return
        if (arr[i] == data) {
            return;
        } else {
            arr[i] = data;
            size++;
            cout << "Element inserted." << endl;
            return;
        }
    }

    // Search for an element in the hash table
    bool search(int data) {
        int h = hash(data);
        int i = h;

        // Linear probing to find the element
        while (arr[i] != -1) {
            if (arr[i] == data) {
                return true;
            }
            i = (i + 1) % cap;

            // If we reach the starting position, the element is not present
            if (i == h) {
                return false;
            }
        }

        return false;
    }

    // Remove an element from the hash table
    void remove(int data) {
        int h = hash(data);
        int i = h;

        // Linear probing to find the element
        while (arr[i] != -1) {
            if (arr[i] == data) {
                arr[i] = -2; // Mark the element as deleted (special marker -2)
                cout << "Element deleted." << endl;
                return;
            }
            i = (i + 1) % cap;

            // If we reach the starting position, the element is not present
            if (i == h) {
                cout << "Element not found." << endl;
                break;
            }
        }

        cout << "Element not found." << endl;
    }
};

int main() {
    Hash mh(7);
    mh.insert(49);
    mh.insert(56);
    mh.insert(72);
    mh.remove(69);
    if (mh.search(56) == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    mh.remove(56);
    if (mh.search(56) == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
