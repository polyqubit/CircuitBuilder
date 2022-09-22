#include "CircApp.h"
#include "imgui.h"

namespace CircApp
{
    void App::Render(bool* close)
    {
        if (!ImGui::Begin("Testing ImGui", close, ImGuiWindowFlags_NoCollapse))
        {
            close = false;
            ImGui::End();
            return;
        }

        if (ImGui::Button("whats good", ImVec2(100, 200)))
            toggle_b1 = !toggle_b1;

        if (toggle_b1)
        {
            if (ImGui::Button("abc", ImVec2(200, 100)))
            {
                close = false;
                ImGui::End();
                return;
            }
        }
        ImGui::End();
    }
}
