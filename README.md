# imgly_assesment
This is a simple C++ project which is build using cmake &amp; has dependency added through conan with some unit tests as well.
This project is developed on a Mac Book Pro , using Visual Studio Code and dependencies like conan & cmake are intalled using homebrew.

Depenndencies for this project:
- Needs Conan installed
- Needs Cmake installed
- Visual Studio Code can be used.

Steps to run this project locally.
Open this project in Visual Studio Code and run the below commands on its terminal.
- Registering profile with conan --> **conan profile new athith-conan(name of your choice) --detect**

- Installing the conan dependency, in our case its defined in the file **conanfile.txt** -->  **conan install . --install-folder build --build=missing**

- Let's see how we build this project, Navigate to the **build** folder from the Project root directory where the dependency gets installed and run the below command

**cd build**
**cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release**
**cmake --build .**

- Once build is done we can run our **Test** case by running the below command from the **build** directory

**cd builds**
**GTEST_COLOR=1 ctest --verbose**


**GITHUB ACTION** is also enabled for this project where it will start a job whenever we push a change :) 
