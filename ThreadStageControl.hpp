#pragma once
#include <string>
#include <vector>
#include <chrono>

struct Stage {
    std::string m_strStageName;        
    std::string m_strSystemMessage;    
    std::string m_strInitMessage;      
    std::chrono::seconds m_secDurationLimit;
};

class ThreadStageControl {
public:
    ThreadStageControl();
    ~ThreadStageControl();

    
    void InitializeStage();

    const std::vector<Stage>& GetStages() const noexcept { return mStages; }
    int GetNumberOfStages() const noexcept { return m_iNumberOfStages; }

private:
    std::vector<Stage> mStages;
    int m_iNumberOfStages = 0;

    static std::vector<Stage> BuildDefaultStages();
};
