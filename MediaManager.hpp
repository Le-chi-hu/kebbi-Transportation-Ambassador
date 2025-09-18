#pragma once
#include <string>
#include <functional>

enum class MediaType { None, Image, Video };

struct MediaSpec {
    MediaType type = MediaType::None;
    std::string path;
    int duration_ms = 0;   // for image
    bool loop = false;     // for video
    int volume = 100;      // 0~100
    int start_ms = 0;      // for video
};

class MediaManager {
public:
    using Callback = std::function<void(const std::string& event, const std::string& detail)>;

    explicit MediaManager(Callback cb);
    void Show(const MediaSpec& spec);
    void Hide();
private:
    Callback cb_;
    // internal helpers: validate path, preload, send protobuf, etc.
};
