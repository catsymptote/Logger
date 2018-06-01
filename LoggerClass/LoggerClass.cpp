// LoggerClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Logger.h"


int main()
{
	Log log;
	log.setLevel(log.LogLevelInfo);
	log.warning("Warning here.");
	log.error("This be an error, maties!");
	log.info("Just some information passing through.");
    return 0;
}

