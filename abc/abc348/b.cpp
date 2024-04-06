#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

int main() {
    int N;
    std::cin >> N;
    std::vector<std::pair<int, int>> points(N);
    for(int i = 0; i < N; ++i) {
        std::cin >> points[i].first >> points[i].second;
    }

    for(int i = 0; i < N; ++i) {
        int maxDistIndex = -1;
        long long maxDist = 0;
        for(int j = 0; j < N; ++j) {
            if(i == j) continue;
            long long dx = points[i].first - points[j].first;
            long long dy = points[i].second - points[j].second;
            long long distSquared = dx * dx + dy * dy;
            if(distSquared > maxDist) {
                maxDist = distSquared;
                maxDistIndex = j;
            } else if(distSquared == maxDist && j < maxDistIndex) {
                maxDistIndex = j;
            }
        }
        std::cout << maxDistIndex + 1 << std::endl;
    }

    return 0;
}
