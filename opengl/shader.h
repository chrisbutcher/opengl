//
//  shader.h
//  basicopengl
//
//  Created by chris on 2014-09-04.
//  Copyright (c) 2014 chris. All rights reserved.
//

#ifndef __basicopengl__shader__
#define __basicopengl__shader__

#ifdef __APPLE__
#define __gl_h_
#define GL_DO_NOT_WARN_IF_MULTI_GL_VERSION_HEADERS_INCLUDED
#endif

#include <iostream>
#include <fstream>
#include <string>
#include <OpenGL/gl3.h>
#include <GLFW/glfw3.h>

class Shader
{
public:
    Shader(const std::string& fileName);
    
    void Bind();    
    
    virtual ~Shader();
protected:
private:
    static const unsigned int NUM_SHADERS = 2;
    
    GLuint m_program;
    GLuint m_shaders[NUM_SHADERS];
};

#endif /* defined(__basicopengl__shader__) */
