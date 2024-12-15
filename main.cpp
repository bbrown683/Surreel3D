#define SDL_MAIN_HANDLED
#include "graphics/window.hpp"
#include "graphics/renderer.hpp"

auto main() -> int {
    CSDLWindow window(1024, 768);
    CVulkanRenderer renderer(&window);

    while(window.IsRunning()) {
        window.PollEvents();
        renderer.DrawFrame();
    }

    return 0;
}