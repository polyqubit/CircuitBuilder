#version 400 core

out vec4 FragColor;

in vec2 oTex;

uniform vec4 uColor;
uniform sampler2D tex;

void main()
{
    FragColor = texture(tex, oTex);
} 