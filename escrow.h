#include<unordered_set>
#include<cstring>
#include<ctime>

class Escrow {
private:
    uint64_t id;
    unordered_set<int> pList;
    time_t start;
    time_t duration;
    uint64_t holderId;
    uint64_t targetId;
    uint64_t objId;
    int size;
public:
    Escrow() {
        
    }

    Escrow(uint64_t id, unordered_set<int> pList, time_t start, time_t duration, uint64_t holderId, int size, uint64_t objId, uint64_t targetId) {
        this->id = id;
        this->pList = pList;
        this->start = start;
        this->duration = duration;
        this->holderId = holderId;
        this->size = size;
        this->objId = objId;
        this->targetId = targetId;
    }

    bool checkInPlist(int wt) {
        return pList.count(wt);
    }

    uint64_t getHolderId() {
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

    int getTargetId() {
        return this->targetId;
    }

};