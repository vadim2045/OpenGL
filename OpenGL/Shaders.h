#ifndef SHADERS_H
#define SHADERS_H
#include<string>
#include<fstream>
#include<sstream>
#include<iostream>
#include<cerrno>
#include <glad/glad.h>

std::string get_file_contents(const char* filename);

class Shader
{
	public:
		GLuint ID;
		Shader(const char* vertexFile, const char* fragmentFile);
		
		void Activate();
		void Delete();
};

#endif