/**
 * @Author: Tyler Fleming <Riunix>
 * @Date:   2018-04-26
 * @Email:  fleming.tj3@gmail.com
 * @Filename: mod-data.c
 * @Last modified by:   Riunix
 * @Last modified time: 2018-04-26
 */

#include "mod-data.h"

typedef struct dependency-node {
    // name of the dependency
    char* name;
    // version of the dependency
    char* version;
} Dependency;

struct mod-data {
    // name of the mod
    char* name;
    // title of the mod
    char* title;
    // version of the mod
    char* version;
    //  earliest version of Factorio mod will run on
    char* factorio-version;
    // dependencies for the mod
    Dependency* dependencies;
};
