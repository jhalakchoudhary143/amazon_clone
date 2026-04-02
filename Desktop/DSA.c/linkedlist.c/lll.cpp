#include <iostream>
using namespace std;

class Score {
private:
    int points;

public:
    // Constructor
    Score(int p = 0) : points(p) {}

    // Accessor
    int getPoints() const { return points; }

    // Friend function declarations
    friend Score& operator++(Score& obj);       // Prefix
    friend Score operator++(Score& obj, int);   // Postfix
};

// Prefix ++ : pehle increment, fir updated object return
Score& operator++(Score& obj) {
    obj.points += 5;   // fixed bonus
    return obj;        // updated object by reference
}

// Postfix ++ : pehle copy banao, fir increment, fir old copy return
Score operator++(Score& obj, int) {
    Score temp = obj;  // old copy
    obj.points += 5;   // fixed bonus
    return temp;       // return old value
}

int main() {
    Score s(10);
    cout << "Initial points: " << s.getPoints() << endl;

    // Prefix ++
    Score& pref = ++s;
    cout << "After prefix ++ (returned): " << pref.getPoints() << endl;
    cout << "Current points: " << s.getPoints() << endl;

    // Postfix ++
    Score post = s++;
    cout << "After postfix ++ (returned old): " << post.getPoints() << endl;
    cout << "Current points: " << s.getPoints() << endl;

    return 0;
}