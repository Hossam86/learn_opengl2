// this example demonstrate how to create a window using glfw and init a opengl context using glad library

#include <GLFW/glfw3.h>
#include <iostream>

// To create an OpenGL context, we need an application window to draw in.
// However, these operations are specific to the operating system, and OpenGL
// purposefully abstracts itself from these operations to be platform-independent.
// This is where GLFW comes in; it is a library that handles window creation and input handling for us.

int
main()
{
	// init glfw libary
	glfwInit();
	glfwInitHint(GLFW_VERSION_MAJOR, 3);
	glfwInitHint(GLFW_VERSION_MINOR, 3);
	glfwInitHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// create a window
	GLFWwindow* window = glfwCreateWindow(800, 600, "GLFW Window", nullptr, nullptr);

	// check if window is created successfully
	if (window == nullptr)
	{
		std::cerr << "Failed to create GLFW window" << std::endl;
		return -1;
	}

	// loop until the user closes the window
	while (!glfwWindowShouldClose(window))
	{
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	// release glfw resources
	glfwTerminate();
	return 0;
}