#pragma once
class Log
{
public:
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;

private:
	int m_LogLevel;

public:
	Log();
	Log(int level);
	~Log();

	void setLevel(int level);

	void error(const char* message);
	void warning(const char* message);
	void info(const char* message);
};
