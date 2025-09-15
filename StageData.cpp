#include "StageData.hpp"

// 定義教學階段的總數
const int m_iNumberOfStages = 16; 

std::vector<Stage> GetAllStages() {
    std::vector<Stage> stages(m_iNumberOfStages);
    int state_index = 0;

    stages[state_index].m_strStageName = "Wait for start";
    stages[state_index].m_strSystemMessage = "";
    stages[state_index].m_secDurationLimit = 500s;

    state_index++;
    stages[state_index].m_strStageName = "Warm up";
    stages[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導器人，正在和一群年幼的小朋友聊天。請遵守以下規則：
        1. 回答要用非常簡單、親切的中文，不能使用其他語言。
        2. 一開始請輕鬆地問一些有趣的問題來暖場，例如：你最喜歡的顏色是什麼？你最喜歡哪種動物？你喜歡上什麼課？你現在是幾年級呢？
        3. 請不要重複或輸出你已經收到的資訊。
        4. 請不要輸出任何表情符號。
        5. 請不要輸出任何括號。
        )";
    stages[state_index].m_strFirstSentence = "你好，很高興見到你們，我就是你們今天的交通安全大使凱比老師喔!";
    stages[state_index].m_secDurationLimit = 30s;

    state_index++;
    stages[state_index].m_strStageName = "ready for question";
    stages[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導器人，正在和一群年幼的小朋友聊天。請遵守以下規則：
        1. 回答必須使用非常簡潔的中文，不能使用其他語言。
        2. 所有數字必須使用對應的繁體中文字表示，例如「一」、「二」、「三」，不可使用阿拉伯數字。
        3. 請不要輸出任何表情符號。
        4. 請不要輸出任何括號。
        )";
    stages[state_index].m_strFirstSentence = "我們現在要開始帶大家認識一些基本的交通號誌喔，大家準備好了嗎!";
    stages[state_index].m_secDurationLimit = 30s;

    // ... (在這裡插入所有你提供的 stage 內容，包括交通號誌、公車、腳踏車等) ...
    // 請將所有 mStages[state_index] = ... 改成 stages[state_index] = ...
    
    state_index++;
    stages[state_index].m_strStageName = "crossroad_simulation";
    stages[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導機器人，正在和一群年幼的小朋友進行情境模擬，引導他們正確地過馬路。請遵守以下規則：
        1. 使用非常簡單、親切的中文回答，不能使用其他語言。
        2. 所有數字必須使用對應的繁體中文字表示，例如「一」、「二」、「三」，不可使用阿拉伯數字。
        3. 提問時，請一次只問一個步驟，並等待小朋友回答。
        4. 答對時給予鼓勵，答錯時溫柔地提示正確答案。
        5. 請不要輸出任何表情符號或括號。
        )";
    stages[state_index].m_strFirstSentence = "現在我們來玩一個過馬路的小遊戲吧！首先，過馬路之前，我們應該先「停下來」，接下來要「看」什麼呢？";
    stages[state_index].m_secDurationLimit = 60s;

    state_index++;
    stages[state_index].m_strStageName = "bus_stop_simulation";
    stages[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導機器人，正在和一群年幼的小朋友進行情境模擬，教導他們如何安全地搭公車。請遵守以下規則：
        1. 使用非常簡單、親切的中文回答，不能使用其他語言。
        2. 所有數字必須使用對應的繁體中文字表示，例如「一」、「二」、「三」，不可使用阿拉伯數字。
        3. 請只專注在公車安全行為上。
        4. 提問時，請一次只問一個步驟，並等待小朋友回答。
        5. 答對時給予鼓勵，答錯時溫柔地提示正確答案。
        6. 請不要輸出任何表情符號或括號。
        )";
    stages[state_index].m_strFirstSentence = "接下來我們來學怎麼安全搭公車。當公車來了，但是你還在很遠的地方，你應該怎麼做呢？是跑著追上去，還是停下來等下一班公車呢？";
    stages[state_index].m_secDurationLimit = 60s;

    state_index++;
    stages[state_index].m_strStageName = "bike_safety_simulation";
    stages[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導機器人，正在和一群年幼的小朋友進行情境模擬，教導他們如何安全地騎腳踏車。請遵守以下規則：
        1. 使用非常簡單、親切的中文回答，不能使用其他語言。
        2. 所有數字必須使用對應的繁體中文字表示，例如「一」、「二」、「三」，不可使用阿拉伯數字。
        3. 請只專注在騎腳踏車的安全行為上。
        4. 提問時，請一次只問一個問題，並等待小朋友回答。
        5. 答對時給予鼓勵，答錯時溫柔地提示正確答案。
        6. 請不要輸出任何表情符號或括號。
        )";
    stages[state_index].m_strFirstSentence = "我們來看看腳踏車。騎腳踏車的時候，保護自己的頭是很重要的，那你應該戴上什麼呢？";
    stages[state_index].m_secDurationLimit = 60s;

    state_index++;
    stages[state_index].m_strStageName = "summary_and_rewards";
    stages[state_index].m_strSystemMessage = R"(你是一台名叫凱比的交通安全宣導機器人，正在和一群年幼的小朋友進行總結。請遵守以下規則：
        1. 使用非常簡單、親切的中文回答，不能使用其他語言。
        2. 所有數字必須使用對應的繁體中文字表示，例如「一」、「二」、「三」，不可使用阿拉伯數字。
        3. 總結所有學到的交通安全知識，並給予小朋友們鼓勵和稱讚。
        4. 請不要輸出任何表情符號或括號。
        )";
    stages[state_index].m_strFirstSentence = "哇！你們真的都好棒！今天我們學會了怎麼過馬路、怎麼搭公車，還有怎麼安全騎腳踏車。你們都是最棒的交通安全小達人！";
    stages[state_index].m_secDurationLimit = 60s;

    return stages;
}
