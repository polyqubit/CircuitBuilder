#include "CircApp.h"

namespace CircApp
{
    void App::Render(bool* close, ImTextureID tex)
    {
        window_flags |= ImGuiWindowFlags_NoMove;
        window_flags |= ImGuiWindowFlags_NoResize;
        window_flags |= ImGuiWindowFlags_NoCollapse;
        window_flags |= ImGuiWindowFlags_NoNav;

        Style(0);
        RenderGates(window_flags);
        RenderIO(window_flags);
        RenderIC(window_flags);
        RenderSimWindow(window_flags, tex);
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
    void App::RenderSimWindow(ImGuiWindowFlags flags, ImTextureID tex)
    {
        //ImGui::PushStyleVar(ImGuiStyleVar_WindowBorderSize, 0.0f);
        ImGui::Begin("testwindow", nullptr, flags);
        ImGui::BeginChild("GameRender");
        rendSize = ImGui::GetWindowSize();
        rendPos = ImGui::GetWindowPos();
        ImGui::Image((ImTextureID)tex, rendSize, ImVec2(0, 1), ImVec2(1, 0));
        ImGui::EndChild();
        ImGui::End();
        //ImGui::PopStyleVar();
    }
    void App::Style(int sty)
    {
        /* main
        * #1b212c
        * #ffffff
        * #d9d9d9
        * #82c7a5 
        */
        
        /* accent
        * #0145ac
        * #eece1a
        * #4e5567
        * #f4d6ad
        * #f15e22
        * #7890cd
        */
        ImGuiStyle& style = ImGui::GetStyle();
        style.Colors[ImGuiCol_WindowBg] = ImColor(0x0b, 0x11, 0x1c);
        //style.FrameBorderSize = 0.0f;
    }
    ImVec2 App::getRendSize() const
    {
        return rendSize;
    }
    ImVec2 App::getRendPos() const
    {
        return rendPos;
    }
}
