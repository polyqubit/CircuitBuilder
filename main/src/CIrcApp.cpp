#include "CircApp.h"
#include "imgui.h"

namespace CircApp
{
    void App::Render(bool* close)
    {
        if (!ImGui::Begin("hi", close))
        {
            close = false;
            ImGui::End();
            return;
        }
        if (ImGui::Button("whats good", ImVec2(100, 100)))
        {
            toggle_b1 = !toggle_b1;
        }
        if (toggle_b1)
        {
            ImGui::Button("abc");
        }
        ImGui::End();
    }
}
