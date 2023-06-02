class UndergroundSystem {

    vector<vector<string>> container;
    vector<vector<string>> timeTable;

public:
    UndergroundSystem() {}
    
    void checkIn(int id, string stationName, int t) {
        container.push_back({to_string(id), stationName, to_string(t)});
    }
    
    void checkOut(int id, string stationName, int t) {
        int eraseThis;
        for (int i (0); i<container.size(); ++i) {
            if (stoi(container[i][0])==id) {
                timeTable.push_back({container[i][1], stationName, to_string(t-stoi(container[i][2]))});
                eraseThis=i;
            }
        }
        container.erase(container.begin()+eraseThis);
    }
    
    double getAverageTime(string startStation, string endStation) {
        double average (0);
        double n (0);
        for (auto& el : timeTable) {
            if (el[0]==startStation && el[1]==endStation) {
                average+=stoi(el[2]);
                n+=1;
            }
        }
        return average/n;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
