struct MediaScript {
    MediaType type = MediaType::None;
    std::string path;
    chrono::milliseconds duration{0}; // 圖片用
    bool loop = false;                 // 影片用
    int volume = 100;
    int start_ms = 0;
};

struct State {
    // ... 你原有的欄位
    MediaScript media;
    bool bWaitForMediaComplete = false;
};
