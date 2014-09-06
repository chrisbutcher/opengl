//
//  display.h
//  basicopengl
//
//  Created by chris on 2014-09-03.
//  Copyright (c) 2014 chris. All rights reserved.
//

#ifndef __basicopengl__display__
#define __basicopengl__display__

#ifdef __APPLE__
#define __gl_h_
#define GL_DO_NOT_WARN_IF_MULTI_GL_VERSION_HEADERS_INCLUDED
#endif

#define GLFW_INCLUDE_GLCOREARB

#include <iostream>
#include <string>
#include <OpenGL/gl3.h>
#include <GLFW/glfw3.h>

class Display {
public:
    Display(int width, int height, const std::string& title);
    void Clear(float r, float g, float b, float a);
    void Update();
    bool IsClosed();
    
    virtual ~Display();
protected:
private:
    GLFWwindow* m_window;
    
    Display(const Display& other);
    Display& operator=(const Display& other);
};

#endif /* defined(__basicopengl__display__) */
