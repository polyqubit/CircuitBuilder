#include "CircApp.h"
#include "imgui.h"

namespace CircApp
{
    void Render(bool* close)
    {
        if (!ImGui::Begin("hi", close)) {
            close = false;
            ImGui::End();
            return;
        }
        ImGui::Button("whats good");
        ImGui::End();
    }
}
