#include "CircApp.h"

namespace CircApp
{
    void App::Render(bool* close)
    {
        window_flags |= ImGuiWindowFlags_NoMove;
        window_flags |= ImGuiWindowFlags_NoCollapse;

        RenderGates(window_flags);
        RenderIO(window_flags);
        RenderIC(window_flags);
    }
    void App::RenderGates(ImGuiWindowFlags flags)
    {
        ImGui::Begin("Gates", nullptr, flags);
        ImGui::End();
    }
    void App::RenderIO(ImGuiWindowFlags flags)
    {
        ImGui::Begin("IO", nullptr, flags);
        ImGui::End();
    }
    void App::RenderIC(ImGuiWindowFlags flags)
    {
        ImGui::Begin("IC", nullptr, flags);
        ImGui::End();
    }
}
