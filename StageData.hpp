#pragma once

#include <vector>
#include <string>
#include <chrono>

// 使用 'using namespace std::chrono_literals;' 讓 's' 字尾可用
using namespace std::chrono_literals;

// 定義一個結構來儲存每個教學階段的資訊
struct Stage {
    std::string m_strStageName;
    std::string m_strSystemMessage;
    std::string m_strFirstSentence;
    std::chrono::seconds m_secDurationLimit;
};

// 宣告一個函式，它會回傳所有教學階段的向量
std::vector<Stage> GetAllStages();
