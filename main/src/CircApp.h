#pragma once
#include "imgui.h"
#include <vector>

namespace CircApp
{
    class App{
    public:
        void Render(bool*,ImTextureID);
        ImVec2 getRendSize() const;
        ImVec2 getRendPos() const;
    private:
        ImGuiWindowFlags window_flags = 0;
        ImVec2 rendSize;
        ImVec2 rendPos;
        std::vector<int> components;
        bool toggle_b1 = false;

        void Style(int);
        void RenderGates(ImGuiWindowFlags);
        void RenderIO(ImGuiWindowFlags);
        void RenderIC(ImGuiWindowFlags);
        void RenderSimWindow(ImGuiWindowFlags,ImTextureID);
    };
}
