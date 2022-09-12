#include <glad/glad.h>
#include <glfw/glfw3.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <random>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <vector>
#define WINDOW_TITLE "OpenGL Window"

GLFWwindow* window;

unsigned frameCount = 0;

float angle = 0;
float movCam = 0;
float cameraSpeed = 0;
bool camMode = false, firstMouse = true;

float refred = 0.0;

float lastX = 400, lastY = 300;

GLuint BufferIds[10] = { 0 };

GLuint VBOIds[10] = { 0 };
GLuint VAOIds[10] = { 0 };
GLuint texIds[10] = { 0 };

void Initialize(void);
//void InitWindow(int, char* []);
void ResizeFunction(GLFWwindow*, int, int);
void RenderFunction(GLFWwindow*);
void MouseButtonFunction(GLFWwindow*, int, int, int);

int main(int argc, char* argv[])
{
	Initialize();

	while (!glfwWindowShouldClose(window))
	{
		RenderFunction(window);

		glfwPollEvents();
	}

	glfwTerminate();
	exit(EXIT_SUCCESS);
}

void Initialize()
{
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

	window = glfwCreateWindow(800, 600, WINDOW_TITLE, NULL, NULL);
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return;
	}
	glfwMakeContextCurrent(window);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
		std::cout << "Failed to initialize GLAD" << std::endl;
		return;
	}
	glViewport(0, 0, 800, 600);
	glfwSetFramebufferSizeCallback(window, ResizeFunction);
	glfwSetMouseButtonCallback(window, MouseButtonFunction);

	std::cout << "INFO: OpenGL Version: " << glGetString(GL_VERSION) << "\n";

	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LESS);

	/*glEnable(GL_CULL_FACE);
	glCullFace(GL_BACK);
	glFrontFace(GL_CCW);*/

	glfwSetWindowPos(window, 400, 100);
}

void ResizeFunction(GLFWwindow* window, int width, int height)
{
	glViewport(0, 0, width, height);
}

void RenderFunction(GLFWwindow* window)
{
	//glClearColor(0.9f, 0.9f, 0.9f, 1.0f);
	glClearColor(refred, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//DrawObj();
	glfwSwapBuffers(window);
}

void MouseButtonFunction(GLFWwindow* window, int button, int action, int mods) {
	if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS) {
		refred = 1.0f;
	}
	else {
		refred = 0.0f;
	}
}