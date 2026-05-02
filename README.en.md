# Stanbrairy ![star](https://img.shields.io/github/stars/stan-robotix-6622/Stanbrairy)
Librairy used by Stan Robotix 6622 in their FRC robots

## How to use
1. Add the repository as a submodule by using the git command `git submodule add https://github.com/stan-robotix-6622/Stanbrairy` **followed by the relative path where the submodule should be created :** `(projet/)src/stanbrairy`
2. Modify the project's `build.gradle` to include the newly added source of code :
    1. Find the `sources.cpp` section
    2. Add `src/stanbrairy/cpp` to the `source` subsection
    3. Add `src/stanbrairy/include` to the `exportedHeaders` subsection
    4. Now refresh intellisence to apply the changes by entering the following command :
    ```
    ./gradlew generateVSCodeConfig
    ```
3. You can now include the resources provided by Stanbrairy using `#include "stanbrairy/..."`

## Cloning a repo with Stanbrairy
To clone a repository using Stanbrairy as a submodule, you should do one of the following :
- Append `--recurse-submodules` to the `git clone` command
- Run the following git command after cloning the repository :
```
git submodule update --init --recursive
```
