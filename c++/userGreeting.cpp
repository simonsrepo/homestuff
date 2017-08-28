#include <iostream>
using namespace std;

class message {
    private:
        char name[20];
    public:
        void greeting() {
            cout << "Hello there, please enter your name:\n";
            cin >> name;
            cout << "Why hello " << name << "\n";
        }
};

int main() {
    message user;

    user.greeting();
}