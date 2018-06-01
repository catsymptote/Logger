#include "stdafx.h"
#include "Logger.h"
#include <iostream>


Log::Log() {}
Log::Log(int level)
{
	//m_LogLevel = level;	// this-> m_LogLevel = level;
	this->setLevel(level);
}
Log::~Log() {}

void Log::setLevel(int level)
{
	m_LogLevel = level;
}

void Log::info(const char * message)
{
	if (m_LogLevel >= LogLevelInfo)
		std::cout << "[INFO]:\t\t" << message << std::endl;
}

void Log::warning(const char * message)
{
	if (m_LogLevel >= LogLevelWarning)
		std::cout << "[WARNING]:\t" << message << std::endl;
}

void Log::error(const char * message)
{
	if (m_LogLevel >= LogLevelError)
		std::cout << "[ERROR]:\t" << message << std::endl;
}
