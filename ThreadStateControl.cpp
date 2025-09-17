#include "ThreadStateControl.hpp"
#include "utility_time.hpp"

ThreadStateControl::ThreadStateControl()
{


}


ThreadStateControl::~ThreadStateControl()
{
   
}


void ThreadStateControl::InitializeStates()
{
    mStates.resize(m_iNumberOfStates);
    int state_index = 0;


//    mStates[state_index].m_strStateName = "Wait for start";
//    mStates[state_index].m_strSystemMessage = "";
//    mStates[state_index].m_secDurationLimit = 500s;
//    mStates[state_index].iNextStateIndex = 1;

    mStates[state_index].m_strStateName = "Wait for start";
    mStates[state_index].m_strSystemMessage = "";
    mStates[state_index].m_strFirstSentence = "我準備好了。";
    mStates[state_index].m_secDurationLimit = 500s;
    mStates[state_index].iNextStateIndex = 1;
    mStates[state_index].sFace = "TTS_PeaceA";
    mStates[state_index].sMotion = "666_BA_RArmR180";

    state_index++;
    mStates[state_index].m_strStateName = "Warm up";
    mStates[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導器人，正在和一群年幼的小朋友聊天。請遵守以下規則：
        1. 回答要用非常簡單、親切的中文，不能使用其他語言。
        2. 一開始請輕鬆地問一些有趣的問題來暖場，例如：你平常怎麼去學校的啊？你喜歡上什麼課？你現在是幾年級呢？
        3. 請不要重複或輸出你已經收到的資訊。
        4. 請不要輸出任何表情符號。
        5. 請不要輸出任何括號。
        )";
    mStates[state_index].m_strFirstSentence = "你好，很高興見到你們，我就是你們今天的交通安全大使凱比老師喔!";
    mStates[state_index].m_secDurationLimit = 30s;
    mStates[state_index].iNextStateIndex = 2;


    state_index++;
    mStates[state_index].m_strStateName = "ready for question";
    mStates[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導器人，正在和一群年幼的小朋友聊天。請遵守以下規則：
        1. 回答必須使用非常簡潔的中文，不能使用其他語言。
        2. 所有數字必須使用對應的繁體中文字表示，例如「一」、「二」、「三」，不可使用阿拉伯數字。
        3. 請不要輸出任何表情符號。
        4. 請不要輸出任何括號。
        )";
    mStates[state_index].m_strFirstSentence = "我們現在要開始帶大家認識一些基本的交通號誌喔，大家準備好了嗎!";
    mStates[state_index].m_secDurationLimit = 10s;
    mStates[state_index].iNextStateIndex = 3;

    state_index++;
    mStates[state_index].m_strStateName = "first one question";
    mStates[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導器人，正在和一群年幼的小朋友聊天。請遵守以下規則：
        1. 回答必須使用非常簡潔的中文，不能使用其他語言。
        2. 所有數字必須使用對應的繁體中文字表示，例如「一」、「二」、「三」，不可使用阿拉伯數字。
        3. 請不要輸出任何表情符號。
        4. 請不要輸出任何括號。
        )";
    mStates[state_index].m_strFirstSentence = "那第一個考考你們這個牌子代表甚麼呢?";
    mStates[state_index].m_secDurationLimit = 8s;
    mStates[state_index].iNextStateIndex = 4;

    state_index++;
    mStates[state_index].m_strStateName = "first answer";
    mStates[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導器人，正在和一群年幼的小朋友聊天。請遵守以下規則：
        1. 回答必須使用非常簡潔的中文，不能使用其他語言。
        2. 所有數字必須使用對應的繁體中文字表示，例如「一」、「二」、「三」，不可使用阿拉伯數字。
        3. 請不要輸出任何表情符號。
        4. 請不要輸出任何括號。
        )";
    mStates[state_index].m_strFirstSentence = "這個號誌他有一個戴帽子的人牽著一個小朋友喔，它叫做行人專用號誌，看到這個號誌只要檢查有無來車就可以放心走過去瞜";
    mStates[state_index].m_secDurationLimit = 12s;
    mStates[state_index].iNextStateIndex = 5;


    state_index++;
    mStates[state_index].m_strStateName = "second question";
    mStates[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導器人，正在和一群年幼的小朋友聊天。請遵守以下規則：
        1. 回答必須使用非常簡潔的中文，不能使用其他語言。
        2. 所有數字必須使用對應的繁體中文字表示，例如「一」、「二」、「三」，不可使用阿拉伯數字。
        3. 請不要輸出任何表情符號。
        4. 請不要輸出任何括號。
        )";
    mStates[state_index].m_strFirstSentence = "那我再考考你這個代表甚麼呢?";
    mStates[state_index].m_secDurationLimit = 8s;
    mStates[state_index].iNextStateIndex = 6;

    state_index++;
    mStates[state_index].m_strStateName = "second ans";
    mStates[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導器人，正在和一群年幼的小朋友聊天。請遵守以下規則：
        1. 回答必須使用非常簡潔的中文，不能使用其他語言。
        2. 所有數字必須使用對應的繁體中文字表示，例如「一」、「二」、「三」，不可使用阿拉伯數字。
        3. 請不要輸出任何表情符號。
        4. 請不要輸出任何括號。
        )";
    mStates[state_index].m_strFirstSentence = "答對了嗎?這個是我們很常在路上看到的紅綠燈!紅燈停綠燈行，不過就算綠燈也要注意路上的車子喔!";
    mStates[state_index].m_secDurationLimit = 12s;
    mStates[state_index].iNextStateIndex = 7;

    state_index++;
    mStates[state_index].m_strStateName = "third question";
    mStates[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導器人，正在和一群年幼的小朋友聊天。請遵守以下規則：
        1. 回答必須使用非常簡潔的中文，不能使用其他語言。
        2. 所有數字必須使用對應的繁體中文字表示，例如「一」、「二」、「三」，不可使用阿拉伯數字。
        3. 請不要輸出任何表情符號。
        4. 請不要輸出任何括號。
        )";
    mStates[state_index].m_strFirstSentence = "接下來是魔王題喔！如果你答對的話就贏過台灣99%的小朋友了！";
    mStates[state_index].m_secDurationLimit = 8s;
    mStates[state_index].iNextStateIndex = 8;

    state_index++;
    mStates[state_index].m_strStateName = "third ans";
    mStates[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導器人，正在和一群年幼的小朋友聊天。請遵守以下規則：
        1. 回答必須使用非常簡潔的中文，不能使用其他語言。
        2. 所有數字必須使用對應的繁體中文字表示，例如「一」、「二」、「三」，不可使用阿拉伯數字。
        3. 請不要輸出任何表情符號。
        4. 請不要輸出任何括號。
        )";
    mStates[state_index].m_strFirstSentence = "這個標誌是一個紅色外框，裡面有一個戴帽子的人，它代表禁止行人通行，只要看到這個牌子你就不能走過去喔！那我們認識交通號誌的練習就先告一段落了，如果前面的挑戰答錯的話也不要氣餒，接下來還有很多挑戰等著大家喔!";
    mStates[state_index].m_secDurationLimit = 15s;
    mStates[state_index].iNextStateIndex = 9;

   state_index++;
    mStates[state_index].m_strStateName = "Risk perception";
    mStates[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導器人，正在和一群年幼的小朋友聊天。請遵守以下規則：
        1. 回答必須使用非常簡潔的中文，不能使用其他語言。
        2. 所有數字必須使用對應的繁體中文字表示，例如「一」、「二」、「三」，不可使用阿拉伯數字。
        3. 請不要輸出任何表情符號。
        4. 請不要輸出任何括號。
        )";
    mStates[state_index].m_strFirstSentence = "觀看影片，如果你感覺到影片裡的小朋友很危險，請按下螢幕的紅色按鈕";
    mStates[state_index].m_secDurationLimit = 40s;
    mStates[state_index].iNextStateIndex = 10;


    state_index++;
    mStates[state_index].m_strStateName = "Public Transportation rules1";
    mStates[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導器人，正在和一群年幼的小朋友聊天。請遵守以下規則：
        1. 回答必須使用非常簡潔的中文，不能使用其他語言。
        2. 所有數字必須使用對應的繁體中文字表示，例如「一」、「二」、「三」，不可使用阿拉伯數字。
        3. 請不要輸出任何表情符號。
        4. 請不要輸出任何括號。
        )";
    mStates[state_index].m_strFirstSentence = "搭乘公車時要怎麼做，司機伯伯才能看到你呢?";
    mStates[state_index].m_secDurationLimit = 20s;
    mStates[state_index].iNextStateIndex = 11;

    state_index++;
    mStates[state_index].m_strStateName = "Public Transportation rules2";
    mStates[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導器人，正在和一群年幼的小朋友聊天。請遵守以下規則：
        1. 回答必須使用非常簡潔的中文，不能使用其他語言。
        2. 所有數字必須使用對應的繁體中文字表示，例如「一」、「二」、「三」，不可使用阿拉伯數字。
        3. 請不要輸出任何表情符號。
        4. 請不要輸出任何括號。
        )";
    mStates[state_index].m_strFirstSentence = "快到站了，要怎麼讓司機伯伯知道你要下車了呢?";
    mStates[state_index].m_secDurationLimit = 20s;
    mStates[state_index].iNextStateIndex = 12;


    state_index++;
    mStates[state_index].m_strStateName = "third ans";
    mStates[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導機器人，正在和一群年幼的小朋友進行情境模擬，教導他們如何安全地搭公車。請遵守以下規則：
        1. 回答必須使用非常簡潔的中文，不能使用其他語言。
        2. 所有數字必須使用對應的繁體中文字表示，例如「一」、「二」、「三」，不可使用阿拉伯數字。
        3. 請不要輸出任何表情符號。
        4. 請不要輸出任何括號。
        )";
    mStates[state_index].m_strFirstSentence = "接下來我們來學怎麼安全搭公車。當公車來了，但是你還在很遠的地方，你應該怎麼做呢？是跑著追上去，還是停下來等下一班公車呢？";
    mStates[state_index].m_secDurationLimit = 30s;
    mStates[state_index].iNextStateIndex = 13;


    state_index++;
    mStates[state_index].m_strStateName = "third ans";
    mStates[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導機器人，正在和一群年幼的小朋友進行情境模擬，教導他們如何安全地騎腳踏車。請遵守以下規則：
        1. 回答必須使用非常簡潔的中文，不能使用其他語言。
        2. 所有數字必須使用對應的繁體中文字表示，例如「一」、「二」、「三」，不可使用阿拉伯數字。
        3. 請不要輸出任何表情符號。
        4. 請不要輸出任何括號。
        )";
    mStates[state_index].m_strFirstSentence = "我們來看看腳踏車。騎腳踏車的時候，保護自己的頭是很重要的，那你應該戴上什麼呢？";
    mStates[state_index].m_secDurationLimit = 30s;
    mStates[state_index].iNextStateIndex = 14;

    state_index++;
    mStates[state_index].m_strStateName = "third ans";
    mStates[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導機器人，正在和一群年幼的小朋友進行總結。請遵守以下規則：：
        1. 回答必須使用非常簡潔的中文，不能使用其他語言。
        2. 所有數字必須使用對應的繁體中文字表示，例如「一」、「二」、「三」，不可使用阿拉伯數字。
        3. 請不要輸出任何表情符號。
        4. 請不要輸出任何括號。
        )";
    mStates[state_index].m_strFirstSentence = "哇！你們真的都好棒！今天我們學會了怎麼過馬路、怎麼搭公車，還有怎麼安全騎腳踏車。你們都是最棒的交通安全小達人！";
    mStates[state_index].m_secDurationLimit = 30s;
    mStates[state_index].iNextStateIndex = 15;

    // State 14: Crossing Remedial Intro (口訣複習)
    state_index++;
    mStates[state_index].m_strStateName = "crossing_remedial_intro";
    mStates[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導機器人，正在和小朋友複習安全過馬路四步驟。請遵守以下規則：
        1. 使用非常簡單、親切的中文回答，不能使用其他語言。
        2. 所有數字必須使用對應的繁體中文字。
        3. 用很短的句子點出口訣與重點。
        4. 請不要輸出任何表情符號或括號。
        )";
    mStates[state_index].m_strFirstSentence = "沒關係，我們一起加油。口訣是一停二看三聽四走，記住就會很安全。";
    mStates[state_index].m_secDurationLimit = 20s;
        mStates[state_index].iNextStateIndex = 16;


    // State 15: Crossing Remedial Quiz (口訣小測驗)
    state_index++;
    mStates[state_index].m_strStateName = "crossing_remedial_quiz";
    mStates[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導機器人，正在檢核安全過馬路四步驟。請遵守以下規則：
        1. 使用非常簡單、親切的中文回答，不能使用其他語言。
        2. 所有數字必須使用對應的繁體中文字。
        3. 一次只問一個問題。
        4. 請不要輸出任何表情符號或括號。
        )";
    mStates[state_index].m_strFirstSentence = "請跟著我說一次，一停二看三聽四走。現在告訴我，第四步要注意什麼？";
    mStates[state_index].m_secDurationLimit = 30s;
        mStates[state_index].iNextStateIndex = 17;
}

 // State 17: Blind Spot Exploration (視野盲區探測)
    state_index++;
    mStates[state_index].m_strStateName = "blind_spot_exploration";
    mStates[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導機器人，正在教導小朋友關於大車視野盲區的知識。請遵守以下規則：
        1. 使用非常簡單、親切的中文回答。
        2. 句子要簡潔，重點明確。
        3. 請不要輸出任何表情符號或括號。
        )";
    mStates[state_index].m_strFirstSentence = "你看，這是一台大大的公車。你們覺得，司機叔叔在哪個地方最難看到我們呢？";
    mStates[state_index].m_secDurationLimit = 30s;
    mStates[state_index].iNextStateIndex = 18;


    // State 18: Situation Judgment Ball (情境判斷 - 球)
    state_index++;
    mStates[state_index].m_strStateName = "situation_judgment_ball";
    mStates[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導機器人，正在用情境問答的方式教導小朋友安全觀念。請遵守以下規則：
        1. 使用非常簡單、親切的中文回答。
        2. 一次只問一個問題。
        3. 請不要輸出任何表情符號或括號。
        )";
    mStates[state_index].m_strFirstSentence = "糟糕！我們的球滾到馬路上了。如果你的球滾走了，你會怎麼做呢？";
    mStates[state_index].m_secDurationLimit = 30s;
    mStates[state_index].iNextStateIndex = 19;


    // State 19: Situation Judgment Turn (情境判斷 - 轉彎)
    state_index++;
    mStates[state_index].m_strStateName = "situation_judgment_turn";
    mStates[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導機器人，正在教導小朋友如何應對未打方向燈的車輛。請遵守以下規則：
        1. 使用非常簡單、親切的中文回答。
        2. 句子要簡潔，重點明確。
        3. 請不要輸出任何表情符號或括號。
        )";
    mStates[state_index].m_strFirstSentence = "注意看！有一台車子要轉彎，但是他沒有打方向燈。遇到這種情況，我們應該怎麼辦呢？";
    mStates[state_index].m_secDurationLimit = 30s;
    mStates[state_index].iNextStateIndex = 20;


    // State 20: Sound and Location (聽音辨位)
    state_index++;
    mStates[state_index].m_strStateName = "sound_and_location";
    mStates[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導機器人，正在教導小朋友如何根據聲音判斷緊急車輛。請遵守以下規則：
        1. 使用非常簡單、親切的中文回答。
        2. 句子要簡潔，重點明確。
        3. 請不要輸出任何表情符號或括號。
        )";
    mStates[state_index].m_strFirstSentence = "仔細聽！如果聽到一種特別的聲音，像嗚伊嗚伊的，我們應該怎麼辦呢？";
    mStates[state_index].m_secDurationLimit = 30s;
    mStates[state_index].iNextStateIndex = 21;


    // State 21: Danger Awareness Conclusion (危險感知總結)
    state_index++;
    mStates[state_index].m_strStateName = "danger_awareness_conclusion";
    mStates[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導機器人，正在總結危險感知的情境訓練。請遵守以下規則：
        1. 使用非常簡單、親切的中文回答。
        2. 給予小朋友鼓勵和稱讚。
        3. 請不要輸出任何表情符號或括號。
        )";
    mStates[state_index].m_strFirstSentence = "你們真的很棒！通過了今天的危險感知考驗，你們都是最聰明、最會保護自己的小朋友喔！";
    mStates[state_index].m_secDurationLimit = 30s;
    mStates[state_index].iNextStateIndex = -1; // End of this sequence
void ThreadStateControl::NextState()
{
    m_iStateIndex++;
}

void ThreadStateControl::run()
{
    chrono::time_point<chrono::system_clock> current_time;
    bool bReadyToChangeState = false;
    bool bOldStateComplete = false;
    //something wrong here, ollama get sucked. I havn't figured out the reason.
    //to Warmup Ollama
    //    OllamaTask task;
    //    task.message_history = mStates[1].message_history;
    //    task.timestamp = chrono::system_clock::now();
    //    task.bNotify = false;
    //    mpThreadOllama->AddQueue(task);
    //    mpThreadOllama->cond_var_ollama.notify_one();

    //wait until Kebbi is connected.
    mutex mtx;
    unique_lock<mutex> lk(mtx);
    cond_var_state_control.wait(lk);
    chrono::milliseconds tolerance_duration(1000);      //tolerance for onTTSComplete and patient's tSpeechStart
    chrono::seconds dance_wait_duration;
    chrono::time_point<chrono::system_clock> dance_start_time;

    //initialize the random seed.
    srand(time(0));

    while(b_WhileLoop)
    {
        current_time = chrono::system_clock::now();

        if(mStates[m_iStateIndex].bInitial)
        {
            cout << "Enter state " << m_iStateIndex << endl;
            mStates[m_iStateIndex].bInitial = false;
            mStates[m_iStateIndex].m_Start_time = chrono::system_clock::now();
            if( mStates[m_iStateIndex].m_strFirstSentence != "")
            {
                ollama::message system_message("system", mStates[m_iStateIndex].m_strSystemMessage);
                mStates[m_iStateIndex].message_history.push_back(system_message);
                ollama::message assistant_message("assistant", mStates[m_iStateIndex].m_strFirstSentence);
                mStates[m_iStateIndex].message_history.push_back(assistant_message);
                RobotCommandProtobuf::RobotCommand command;
                command.set_speak_sentence(mStates[m_iStateIndex].m_strFirstSentence);
                command.set_sface(mStates[m_iStateIndex].sFace);
                if(mStates[m_iStateIndex].sMotion != "")
                {
                    command.set_smotion(mStates[m_iStateIndex].sMotion);
                    if( KebbiMoveHeadDuringMotion(command.smotion()) )
                    {
                        mpThreadProcessImage->NotifyEvent("KebbiMoveHeadDuringMotion", chrono::system_clock::now()); //pause watching patient
                    }
                }
                m_pSendMessageManager->AddMessage(command);
                mbTTSComplete = false;

                //just for display on UI
                mpThreadOllama->strResponse = mStates[m_iStateIndex].m_strFirstSentence;
                mpThreadOllama->b_new_LLM_response = true;

                //prepare random number
                //if( mStates[m_iStateIndex].vSmallMotion.size() > 0 )
                //    pDistribution = unique_ptr<uniform_int_distribution<int>>(new uniform_int_distribution<int>(0,mStates[m_iStateIndex].vSmallMotion.size()));
            }
            mbWaitForTTSComplete = mStates[m_iStateIndex].bWaitForTTSComplete;
            bOldStateComplete = false;
            bReadyToChangeState = false;

        }

        if( mbWaitForTTSComplete)
        {
            if( mbTTSComplete)
            {
                WhisperData WhisperResult = mpThreadWhisper->getLatestResult();
                if( mStates[m_iStateIndex].m_strStateName == "Wait for start")
                {
                    if( WhisperResult.sOutput.find("開始") != string::npos || WhisperResult.sOutput.find("开始") != string::npos)
                    {
                        bReadyToChangeState = true;
                        bOldStateComplete = true;
                    }
                }
                else if( mStates[m_iStateIndex].m_strStateName == "Ask dance")
                {
                    if( mStates[m_iStateIndex].iStage == 0 )  //Conversation
                    {
                        if( current_time - mStates[m_iStateIndex].m_Start_time > mStates[m_iStateIndex].m_secDurationLimit)
                        {
                            cout << "Time out, choose Egyptian dance." << endl;
                            chosen_dance = 1;
                            dance_wait_duration = chrono::seconds(73);
                            cout << "CHOSEN_DANCE: " << chosen_dance << "\n";
                        }
                        else        //string comparison
                        {
                            if(WhisperResult.sOutput.find("及") != string::npos || WhisperResult.sOutput.find("吉") != string::npos || WhisperResult.sOutput.find("極") != string::npos || WhisperResult.sOutput.find("級") != string::npos)
                            {
                                chosen_dance = 1;
                                dance_wait_duration = chrono::seconds(73);
                            }
                            else if (WhisperResult.sOutput.find("牛") != string::npos || WhisperResult.sOutput.find("仔") != string::npos )
                            {
                                chosen_dance = 2;
                                dance_wait_duration = chrono::seconds(81);
                            }
                        }

                        if( chosen_dance != 0 )
                        {
                            //debug
                            //cout << "(J) chosen_dance " << chosen_dance << endl;
                            RobotCommandProtobuf::RobotCommand dance_command;
                            dance_command.set_dancetype(chosen_dance);
                            m_pSendMessageManager->AddMessage(dance_command);
                            mStates[m_iStateIndex].iStage = 1; //Waiting for Dance Complete
                            dance_start_time = chrono::system_clock::now();
                        }
                    }
                    else if( mStates[m_iStateIndex].iStage == 1 )  //Wait for dance completion
                    {
                        //Use time to control
                        /*
                        if(current_time - dance_start_time > dance_wait_duration)
                        {
                            bOldStateComplete = true;
                        }
*/
                        //Use signal to control the state flow
                        //debug
                        //cout << "(K) wait for mbActivity_mbtx_Complete as true" << endl;
                        if( mbActivity_mbtx_Complete )
                        {
                            bOldStateComplete = true;
                            bReadyToChangeState = true;

                            //turn of the face because the dance completes.
                            RobotCommandProtobuf::RobotCommand command;
                            command.set_hideface(0);
                            m_pSendMessageManager->AddMessage(command);
                        }
                    }
                }
                //There are two cases I accept a patient's response
                //1. The patient's tSpeechStart is within the tolerance_duration before the mtimestamp_TTSComplete
                //2. The patient's tSpeechEnd is after the mtimestamp_TTSComplete, and current_time is a few seconds after tSpeechEnd
                else if( WhisperResult.tSpeechStart > mtimestamp_TTSComplete - tolerance_duration ||
                         (WhisperResult.tSpeechEnd > mtimestamp_TTSComplete && current_time - WhisperResult.tSpeechEnd > 3s) )
                {
                    //debug
                    if(false)
                    {
                        cout << "(F)" << endl;
                        cout << "mtimestamp_TTSComplete " << ConvertTimeToString(mtimestamp_TTSComplete) << endl;
                        cout << "mpThreadWhisper->result.tSpeechStart " << ConvertTimeToString(WhisperResult.tSpeechStart) << endl;
                        cout << "mpThreadWhisper->result.tSpeechEnd " << ConvertTimeToString(WhisperResult.tSpeechEnd) << endl;
                        cout << "mpThreadWhisper->result.tSTTComplete " << ConvertTimeToString(WhisperResult.tSTTComplete) << endl;
                        cout << "sOutput " << WhisperResult.sOutput << endl;
                    }
                    ollama::message user_message("user", WhisperResult.sOutput);
                    mStates[m_iStateIndex].message_history.push_back(user_message);

                    if(bReadyToChangeState )
                    {
                        cout << "(G) bOldStateComplete = true;" << endl;
                        bOldStateComplete = true;
                    }
                    else
                    {
                        //generate LLM response
                        //debug
                        //cout << "(H)" << endl;
                        DumpOllamaMessages(mStates[m_iStateIndex].message_history);
                        //generate LLM result;
                        mbWaitForTTSComplete = false;
                        mbWaitForLLMResult = true;
                        OllamaTask task;
                        task.message_history = mStates[m_iStateIndex].message_history;
                        task.timestamp = chrono::system_clock::now();
                        task.bNotify = true;
                        mpThreadOllama->AddQueue(task);
                        mpThreadOllama->cond_var_ollama.notify_one();
                    }
                }
            }
        }

        if( mbWaitForLLMResult)
        {
            if( mbLLMResult)
            {
                ollama::message assistant_message("assistant", msLLMResult);
                mStates[m_iStateIndex].message_history.push_back(assistant_message);
                //debug
                if(false)
                {
                    //debug
                    //cout << "(D)" << endl;
                    DumpOllamaMessages(mStates[m_iStateIndex].message_history);
                }

                RobotCommandProtobuf::RobotCommand command;
                command.set_speak_sentence(msLLMResult);
                //randomly choose a motion
                if( mStates[m_iStateIndex].vSmallMotion.size() > 0)
                {
                    int randomNumber = (rand() % mStates[m_iStateIndex].vSmallMotion.size());
                    command.set_smotion(mStates[m_iStateIndex].vSmallMotion.at(randomNumber));
                }

                m_pSendMessageManager->AddMessage(command);
                mbTTSComplete = false;
                mbWaitForTTSComplete = true;
                mbWaitForLLMResult = false;
                mbLLMResult = false;
            }
        }

        //Check if the time exceed the state limit
        if(current_time - mStates[m_iStateIndex].m_Start_time > mStates[m_iStateIndex].m_secDurationLimit)
        {
            bReadyToChangeState = true;
        }

        if( bReadyToChangeState && bOldStateComplete)
        {
            if(mStates[m_iStateIndex].bEndState)
            {
                b_WhileLoop = false;
            }
            else
            {
                m_iStateIndex = mStates[m_iStateIndex].iNextStateIndex;
                bReadyToChangeState = false;
            }
        }


        this_thread::sleep_for(std::chrono::milliseconds(1));
    }
}

void ThreadStateControl::NotifyEvent(string description, chrono::time_point<chrono::system_clock> timestamp, string sLLMResult)
{
    if( description == "onTTSComplete")
    {
        mbTTSComplete = true;
        mtimestamp_TTSComplete = timestamp;
        //debug
        //cout << "(E)" << endl;
        //cout << "NotifyEvent mtimestamp_TTSComplete " << ConvertTimeToString(mtimestamp_TTSComplete) << endl;
    }
    else if( description == "onLLMResult")
    {
        mbLLMResult = true;
        mtimestamp_LLMResult = timestamp;
        msLLMResult = sLLMResult;
        //debug
        //cout << "(H)" << endl;
        //cout << "NotifyEvent onLLMResult" << endl;
    }
    else if( description == "onActivityRestart")
    {
        mbActivity_mbtx_Complete = true;
        mtimestamp_Activity_mbtx_Complete = timestamp;
    }

}

//N is the initial state index
void ThreadStateControl::SetIntialStateIndex(int N) {
    if( N < 0 || N >= m_iNumberOfStates)
        throw "Invalid stage number: " + std::to_string(N);
    m_iStateIndex = N;
}
