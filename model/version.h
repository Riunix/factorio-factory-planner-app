/**
 * @Author: Tyler Fleming <Riunix>
 * @Date:   2018-04-15
 * @Email:  fleming.tj3@gmail.com
 * @Filename: version.h
 * @Last modified by:   Riunix
 * @Last modified time: 2018-04-15
 */

#include <string.h>

struct version {
    unsigned int major;
    unsigned int minor;
    unsigned int patch;
}

/**
 * Compares two version numbers
 * Inputs: version *versionA, version *versionB
 * Ouput:  1 if *versionA is greater than *versionB
 *         0 if they are the same
 *         -1 if *versionB is greater than *versionA
 */
int compareVersion(version *versionA, version *versionB) {
    if (*versionA->major == *versionB->major) {
        if ()
    } else
        return (*versionA->major > *versionB->major)
                    - (*versionB->major > *versionA->major);
}
