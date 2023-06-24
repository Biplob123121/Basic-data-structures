#include <iostream>
#include <list>
#include <string>
using namespace std;

void visitAddress(list<string>& addresses, string address) {
    bool found = false;
    for (const string& addr : addresses) {
        if (addr == address) {
            found = true;
            cout << address << endl;
            break;
        }
    }
    if (!found)
        cout << "Not Available" << endl;
}

void nextAddress(list<string>& addresses, list<string>::iterator& currentAddress) {
    if (currentAddress == addresses.end() || next(currentAddress) == addresses.end()) {
        cout << "Not Available" << endl;
    } else {
        currentAddress++;
        cout << *currentAddress << endl;
    }
}

void prevAddress(list<string>& addresses, list<string>::iterator& currentAddress) {
    if (currentAddress == addresses.begin()) {
        cout << "Not Available" << endl;
    } else {
        currentAddress--;
        cout << *currentAddress << endl;
    }
}

int main() {
    list<string> addresses;
    string address;

    // Read the doubly linked list of addresses
    while (cin >> address && address != "end") {
        addresses.push_back(address);
    }

    int Q;
    cin >> Q;

    // Process the queries
    string command, queryAddress;
    cin.ignore(); // Ignore newline character after reading Q
    list<string>::iterator currentAddress = addresses.begin();

    for (int i = 0; i < Q; i++) {
        getline(cin, command);

        if (command.substr(0, 5) == "visit") {
            queryAddress = command.substr(6);
            visitAddress(addresses, queryAddress);
            currentAddress = find(addresses.begin(), addresses.end(), queryAddress);
        } else if (command == "next") {
            nextAddress(addresses, currentAddress);
        } else if (command == "prev") {
            prevAddress(addresses, currentAddress);
        }
    }

    return 0;
}