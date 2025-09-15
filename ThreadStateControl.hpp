#ifndef __THREAD_STAGE_CONTROL_hpp__
#define __THREAD_STAGE_CONTROL_hpp__

#include <QThread> 
#include <vector>  

#include "StageData.hpp" 

using namespace std; 

class ThreadStageControl: public QThread
{
    Q_OBJECT

public:
    ThreadStageControl();
    ~ThreadStageControl();

protected:
    vector<Stage> mStages;
    void InitializeStage();
};

#endif
