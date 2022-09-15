#include "CircApp.h"
#include "imgui.h"

namespace CircApp
{
    void Render()
    {
        ImGui::Begin("hi");
        ImGui::Button("whats good");
        ImGui::End();
    }
}
