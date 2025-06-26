#include <iostream>
#include <random>
#include <ctime>

int main() {
    // 使用梅森旋转算法作为随机数生成器
    std::mt19937 rng(time(nullptr));
    
    // 生成 1 到 100 之间的均匀分布随机整数
    std::uniform_int_distribution<int> dist(1, 100);
    
    for (int i = 0; i < 5; ++i) {
        std::cout << "随机整数: " << dist(rng) << std::endl;
    }
    
    // 生成 0 到 1 之间的均匀分布随机浮点数
    std::uniform_real_distribution<double> realDist(0.0, 1.0);
    
    for (int i = 0; i < 5; ++i) {
        std::cout << "随机浮点数: " << realDist(rng) << std::endl;
    }
    
    return 0;
}    //1