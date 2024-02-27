#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <utility>

struct UndergroundSystem {
    std::unordered_map<int, std::pair<std::string, int>> in;
    std::unordered_map<std::string, std::unordered_map<std::string, std::vector<int>>> time;

    void checkIn(int id, std::string stationName, int t) {
        in[id] = std::make_pair(stationName, t);
    }

    void checkOut(int id, std::string stationName, int t) {
        auto& [startStation, departure] = in[id];
        time[startStation][stationName].push_back(t - departure);
    }

    double getAverageTime(std::string startStation, std::string endStation) {
        double average = 0;
        for(auto t : time[startStation][endStation]) 
            average += t;
        average /= time[startStation][endStation].size();
        return average;
    }
};

int main() {
    UndergroundSystem test;
    test.checkIn(1, "Wembley Park", 2);
    test.checkIn(2, "Wembley Park", 2);
    test.checkOut(1, "St. Pancras", 4);
    test.checkOut(2, "St. Pancras", 4);
    std::cout<<test.getAverageTime("Wembley Park", "St. Pancras");

    return 0;
}