#pragma once

#include <vector>
#include <string>
#include <chrono>

using namespace std::chrono_literals;

struct Stage {
    std::string m_strStageName;
    std::string m_strSystemMessage;
    std::string m_strFirstSentence;
    std::chrono::seconds m_secDurationLimit;
};

// 宣告一個函式，回傳所有教學階段的向量
std::vector<Stage> GetAllStages();
