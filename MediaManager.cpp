#include "MediaManager.hpp"
#include "RobotCommand.pb.h"

MediaManager::MediaManager(Callback cb) : cb_(std::move(cb)) {}

void MediaManager::Show(const MediaSpec& spec) {
  
    RobotCommandProtobuf::RobotCommand cmd;
    if (spec.type == MediaType::Image) {
        cmd.set_show_image(spec.path);
        cmd.set_duration_ms(spec.duration_ms);
    } else if (spec.type == MediaType::Video) {
        cmd.set_play_video(spec.path);
        cmd.set_loop(spec.loop);
        cmd.set_volume(spec.volume);
        cmd.set_start_ms(spec.start_ms);
    }
   

void MediaManager::Hide() {
    RobotCommandProtobuf::RobotCommand cmd;
    cmd.set_hide_media(0);
    
}
