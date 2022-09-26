#include "CircApp.h"

namespace CircApp
{
    void App::Render(bool* close)
    {
        //window_flags |= ImGuiWindowFlags_NoMove;
        window_flags |= ImGuiWindowFlags_NoCollapse;

        Style();
        RenderGates(window_flags);
        RenderIO(window_flags);
        RenderIC(window_flags);
        RenderTestWindow(window_flags);
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
    void App::RenderTestWindow(ImGuiWindowFlags flags)
    {
        ImGui::Begin("testwindow", nullptr, flags);
        ImGui::Button("dummy button");
        ImGui::End();
    }
    void App::Style()
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
        style.Colors[ImGuiCol_WindowBg] =               ImColor(0x0b, 0x11, 0x1c); //-16
        style.Colors[ImGuiCol_Tab] =                    ImColor(0x01, 0x45, 0xac);
    }
}
