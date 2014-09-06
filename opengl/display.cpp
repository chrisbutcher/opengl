//
//  display.cpp
//  basicopengl
//
//  Created by chris on 2014-09-03.
//  Copyright (c) 2014 chris. All rights reserved.
//

#include <iostream>
#include "display.h"

Display::Display(int width, int height, const std::string& title){
    /* Initialize the library */
    if (!glfwInit()){
        return;
    }    
    
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    
    /* Create a windowed mode window and its OpenGL context */
    m_window = glfwCreateWindow(width, height, title.c_str(), NULL, NULL);
    if (!m_window)
    {
        glfwTerminate();
        return;
    }
    
    /* Make the window's context current */
    glfwMakeContextCurrent(m_window);
}

Display::~Display(){

    glfwTerminate();
}

void Display::Update() {
    glfwSwapBuffers(m_window);
    
    /* Poll for and process events */
    glfwPollEvents();
}

void Display::Clear(float r, float g, float b, float a) {
    glClearColor(r, g, b, a);
    glClear(GL_COLOR_BUFFER_BIT);
}

bool Display::IsClosed() {
    return glfwWindowShouldClose(m_window);
}