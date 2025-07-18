#pragma once
#include "who_frame_cap.hpp"

struct quirc;
namespace who {
namespace qrcode {
class WhoQRCode : public WhoTask {
public:
    WhoQRCode(const std::string &name, frame_cap::WhoFrameCapNode *frame_cap_node);
    ~WhoQRCode();
    void set_qrcode_result_cb(const std::function<void(const std::string &)> &result_cb);
    void set_cleanup_func(const std::function<void()> &cleanup_func);

private:
    void task() override;
    void cleanup() override;

    frame_cap::WhoFrameCapNode *m_frame_cap_node;
    struct quirc *m_qr;
    dl::image::img_t m_input;
    std::function<void(const std::string &)> m_result_cb;
    std::function<void()> m_cleanup;
};
} // namespace qrcode
} // namespace who
