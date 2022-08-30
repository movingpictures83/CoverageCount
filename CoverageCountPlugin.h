#ifndef COVERAGECOUNTPLUGIN_H
#define COVERAGECOUNTPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class CoverageCountPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "CoverageCount";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
