#include <iostream>
#include "system.cpp"
using namespace std;

void printResult(string testName, bool result) {
    cout << (result ? "[PASS] " : "[FAIL] ") << testName << endl;
}

int main() {
    cout << "=== User Login Tests ===\n";

    User u("admin", "1234", "ADMIN");

    printResult("Correct login",
        u.login("admin", "1234") == true);

    printResult("Wrong password",
        u.login("admin", "0000") == false);

    printResult("Wrong username",
        u.login("user", "1234") == false);

    return 0;
}
