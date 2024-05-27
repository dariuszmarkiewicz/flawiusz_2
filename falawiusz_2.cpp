#include <iostream>
#include <list>

using namespace std;

int flawiusz(int n, int k) {
    list<int> people;
    for (int i = 1; i <= n; ++i) {
        people.push_back(i);
    }

    auto it = people.begin();
    while (people.size() > 1) {
        for (int i = 0; i < k - 1; ++i) {
            ++it;
            if (it == people.end()) {
                it = people.begin();
            }
        }
        it = people.erase(it);
        if (it == people.end()) {
            it = people.begin();
        }
    }

    return *it;
}

int main() {
    
    int n; // liczba osób
    int k;  // co k-ta osoba zostaje zamordowana
    
    cout << "Ilosc osob: ";
    cin >> n;
    
    cout << "Co ktora osoba ginie: ";
    cin >> k;
   
    cout << "Przetrwała osoba na miejscu: " << flawiusz(n, k) << endl;
    return 0;
}
