# Piper

Piper is an exploration in computer music programming.

  - List features

## Setup

1. [Download](https://cmake.org/download/) and install Cmake 
2. Clone this repo    
`git clone --recurse-submodules` if you have git 2.13 or later    
`git submodule update --init --recursive` if not, or if you forget   
3. `cp tools/agnostic/git-hooks/pre-commit.hook .git/hooks/pre-commit` see note below about "clang format git hook"
4. Create a  build dir.     
`mkdir piper/build`    
5. From within your build dir, kick off cmake, you may need special flags if you want a particular IDE.  
`cd build`    
`cmake .. -Ax64`    
6. Open the generated project and doot away.

## Tools and Third-Party
The contents of these dirs are about helping you. 
### Tools
- **git pre-commit hook**: This little shell script, when installed in your `.git` dir, will run clang-format on all the files you changed in a commit, enforcing some code style.
- **clang-format**: a code formatting tool, uses the `.clangformat` file in the top of the repo. Requires different executables depending on platform, will add more as more platforms are needed. Win and Mac only for the moment. Monkey with the format file at your own risk. Expect MRs to be rejected out of hand if your code clashes with the style. (IF we ever get MRs)

### Third-Party
- **googletest**:  unit testing framework *(submodule)*