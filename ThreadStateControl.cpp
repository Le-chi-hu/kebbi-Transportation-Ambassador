#include "ThreadStateControl.hpp"

ThreadStageControl::ThreadStageControl()
{

}

ThreadStageControl::~ThreadStageControl()
{
    
}

void ThreadStageControl::InitializeStage()
{
    mStages.resize(m_iNumberOfStages);
    int state_index = 0;

    mStages[state_index].m_strStageName = "Wait for start";
    mStages[state_index].m_strSystemMessage = "";
    mStages[state_index].m_secDurationLimit = 500s;

    state_index++;
    mStages[state_index].m_strStageName = "Warm up";
  
