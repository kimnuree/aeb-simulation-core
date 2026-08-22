#include <iostream>
#include <string>

struct TargetData {
    int id;
    double distance_m;
    double rcs_db;
};

// [VOLVO-SIL-102] Radar Target Object Classifier
// 1. TargetData 구조체 정의 (int id, double distance_m, double rcs_db)
// 2. std::string classifyTarget(const TargetData& target) 함수 작성
//    - rcs_db > 10.0 이면 "Vehicle"
//    - 0.0 <= rcs_db <= 10.0 이면 "Pedestrian"
//    - rcs_db < 0.0 이면 "Noise" 반환
// 3. main 함수에서 ID: 101, 거리: 15.5m, RCS: 12.5dB 인 테스트 데이터로 검증 로직 작성

std::string classifyTarget(const TargetData& target) {
    if (target.rcs_db > 10.0) {
        return "Vehicle";
    } else if (target.rcs_db >= 0.0 && target.rcs_db <= 10.0) {
        return "Pedestrian";
    } else {
        return "Noise";
    }
}       


int main() {
    TargetData testTarget = {101, 15.5, 12.5};
    std::string classification = classifyTarget(testTarget);
    
    std::cout << "Target ID: " << testTarget.id << std::endl;
    std::cout << "Distance: " << testTarget.distance_m << " m" << std::endl;
    std::cout << "RCS: " << testTarget.rcs_db << " dB" << std::endl;
    std::cout << "Classification: " << classification << std::endl;

    return 0;
}   

