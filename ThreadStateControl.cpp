#include "ThreadStateControl.hpp"
#include "StageData.hpp"

ThreadStageControl::ThreadStageControl()
{
    InitializeStage(); // 在建構函式中呼叫初始化
}

ThreadStageControl::~ThreadStageControl()
{
   
}

void ThreadStageControl::InitializeStage()
{
    // 所有情境資料都移到了 StageData.cpp
    mStages = GetAllStages();
}
