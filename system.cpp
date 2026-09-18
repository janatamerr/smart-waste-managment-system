#include <iostream>
#include <string>
using namespace std;

/* =======================
   User (Base Class)
   ======================= */
class User {
protected:
    string username;
    string password;
    string role;

public:
    User() {}

    User(string u, string p, string r)
        : username(u), password(p), role(r) {}

    bool login(string u, string p) {
        return (username == u && password == p);
    }

    string getRole() {
        return role;
    }
};

/* =======================
   Complaint
   ======================= */
class Complaint {
private:
    string issue;
    string status;

public:
    Complaint() : issue(""), status("PENDING") {}

    Complaint(string i) : issue(i), status("PENDING") {}

    void updateStatus(string newStatus) {
        status = newStatus;
    }

    string getIssue() {
        return issue;
    }

    string getStatus() {
        return status;
    }
};

/* =======================
   Citizen
   ======================= */
class Citizen : public User {
private:
    static const int MAX = 10;
    Complaint complaints[MAX];
    int count;

public:
    Citizen(string u, string p)
        : User(u, p, "CITIZEN"), count(0) {}

    void submitComplaint(string message) {
        if (count < MAX) {
            complaints[count++] = Complaint(message);
        }
    }

    int getComplaintCount() {
        return count;
    }

    Complaint* getComplaint(int index) {
        if (index >= 0 && index < count)
            return &complaints[index];
        return nullptr;
    }
};

/* =======================
   SmartBin
   ======================= */
class SmartBin {
private:
    string binID;
    double fillLevel;
    double capacity;

public:
    SmartBin(string id, double cap)
        : binID(id), fillLevel(0), capacity(cap) {}

    void updateFillLevel(double level) {
        fillLevel = (level <= capacity) ? level : capacity;
    }

    double getFillLevel() {
        return fillLevel;
    }

    bool isFull() {
        return fillLevel >= capacity;
    }
};

/* =======================
   Route
   ======================= */
class Route {
private:
    static const int MAX = 10;
    string bins[MAX];
    int count;

public:
    Route() : count(0) {}

    void addBin(string binName) {
        if (count < MAX)
            bins[count++] = binName;
    }

    int getCount() {
        return count;
    }

    string getBin(int index) {
        if (index >= 0 && index < count)
            return bins[index];
        return "";
    }
};

/* =======================
   Driver
   ======================= */
class Driver : public User {
private:
    Route route;

public:
    Driver(string u, string p)
        : User(u, p, "DRIVER") {}

    void assignRoute(Route r) {
        route = r;
    }

    int getRouteCount() {
        return route.getCount();
    }
};

