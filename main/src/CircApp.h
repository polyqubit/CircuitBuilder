#pragma once
#include "imgui.h"

namespace CircApp
{
    class App{
    public:
        void Render(bool*);
    private:
        ImGuiWindowFlags window_flags = 0;
        bool toggle_b1 = false;
        void Style();
        void RenderGates(ImGuiWindowFlags);
        void RenderIO(ImGuiWindowFlags);
        void RenderIC(ImGuiWindowFlags);
        void RenderTestWindow(ImGuiWindowFlags);
    };
}
