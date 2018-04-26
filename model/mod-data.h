/**
 * @Author: Tyler Fleming <Riunix>
 * @Date:   2018-04-15
 * @Email:  fleming.tj3@gmail.com
 * @Filename: mod-data.h
 * @Last modified by:   Riunix
 * @Last modified time: 2018-04-26
 */

#include <string.h>

// struct containing the data of a mod
struct mod-data;
struct dependency-node;

int modName(mod-data* mod, char* name);
int modTitle(mod-data* mod, char* title);
int modVersion(mod-data* mod, char* version);
int modFactorioVersion(mod-data* mod, char* factorioVersion);
int 
