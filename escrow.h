#include<unordered_map>
#include<cstring>
#include<worker.h>
#include<ctime>

class Escrow {
private:
    string id;
    unordered_set<WorkerThread> pList;
    time_t start;
    time_t duration;
    string holderId;
    int size;
public:
    Escrow(string id, unordered_set<WorkerThread> pList, time_t start, time_t duration, string holderId, int size) {
        this->id = id;
        this->pList = pList;
        this->start = start;
        this->duration = duration;
        this->holderId;
        this->size = size;
    }

    bool checkInPlist(WokerThread wt) {
        return pList.count(wt);
    }

    string getHolderId() {
        return this->holderId;
    }

    time_t getStart() {
        return this->start;
    }

    time_t getDuration() {
        return this->duration;
    }

    int getSize() {
        return this->size;
    }

}