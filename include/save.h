#ifndef CHANGE_STYLE_OF_NAMING_SAVE_H
#define CHANGE_STYLE_OF_NAMING_SAVE_H

#include <fstream>
#include "project.h"

class Save {
 public:
  explicit Save(Project& project);
 private:
  Project& project_;
  void MakeFile();
  void ChangeFile();
};

#endif //CHANGE_STYLE_OF_NAMING_SAVE_H
