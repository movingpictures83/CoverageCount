#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "CoverageCountPlugin.h"

void CoverageCountPlugin::input(std::string file) {
 inputfile = file;
readParameterFile(file);
}

void CoverageCountPlugin::run() {}

void CoverageCountPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "coverageCount";
myCommand += " ";
addOptionalParameter("-p", "pairedend");
addOptionalParameter("--maxMOp", "maxMOp");
addRequiredParameter("-i", "bamsam");
myCommand += "-o";
myCommand += " ";
myCommand += outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<CoverageCountPlugin> CoverageCountPluginProxy = PluginProxy<CoverageCountPlugin>("CoverageCount", PluginManager::getInstance());
