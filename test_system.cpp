#include <iostream>
#include "system.cpp"
using namespace std;

void printResult(string testName, bool result) {
    cout << (result ? "[PASS] " : "[FAIL] ") << testName << endl;
}

int main() {

    cout << "=== Complaint Tests ===\n";
    Complaint c("Bin is full");
    printResult("Initial status is PENDING",
        c.getStatus() == "PENDING");

    c.updateStatus("RESOLVED");
    printResult("Status updated",
        c.getStatus() == "RESOLVED");

    cout << "\n=== SmartBin Tests ===\n";
    SmartBin b("B1", 100);
    b.updateFillLevel(80);
    printResult("Normal fill update",
        b.getFillLevel() == 80);

    b.updateFillLevel(150);
    printResult("Fill capped at capacity",
        b.getFillLevel() == 100);

    cout << "\n=== Route Tests ===\n";
    Route r;
    r.addBin("Bin A");
    r.addBin("Bin B");

    printResult("Route count correct",
        r.getCount() == 2);

    printResult("First bin correct",
        r.getBin(0) == "Bin A");

    return 0;
}
