//
//  main.cpp
//  basicopengl
//
//  Created by chris on 2014-09-03.
//  Copyright (c) 2014 chris. All rights reserved.
//

#include <iostream>
#include <glm/glm.hpp>
#include <glm/geometric.hpp>
#include "display.h"
#include "shader.h"
#include "mesh.h"

int main(int argc, const char * argv[])
{    
    Display display(800, 600, "OpenGL");
    
    Vertex vertices[] = {Vertex(glm::vec3(-0.5,-0.5,0)),
                         Vertex(glm::vec3(0,0.5,0)),
                         Vertex(glm::vec3(0.5,-0.5,0))};
    
    Mesh mesh(vertices, sizeof(vertices) / sizeof(vertices[0]));
    
    Shader shader("basicShader");
    
    while(!display.IsClosed()) {
        display.Clear(0.5f, 0.0f, 0.2f, 1.0f);
        
        shader.Bind();
        mesh.Draw();

        display.Update();
    }
    
    return 0;
}

