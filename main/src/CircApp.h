#pragma once
#include "imgui.h"
#include <vector>

namespace CircApp
{
    class App{
    public:
        void Render(bool*);
    private:
        ImGuiWindowFlags window_flags = 0;
        std::vector<int> components;
        bool toggle_b1 = false;

        void Style(int);
        void RenderGates(ImGuiWindowFlags);
        void RenderIO(ImGuiWindowFlags);
        void RenderIC(ImGuiWindowFlags);
        void RenderSimWindow(ImGuiWindowFlags);
    };
}
