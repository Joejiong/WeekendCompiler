#ifndef PROGRAM_H
#define PROGRAM_H

#include <memory>

class FuncDef;
using FuncDefPtr = std::unique_ptr<FuncDef>;

class Program
{
  public:
    const std::vector<FuncDefPtr>& GetFunctions() const { return m_functions; }

    std::vector<FuncDefPtr>& GetFunctions() { return m_functions; }

  private:
    std::vector<FuncDefPtr> m_functions;
};

using ProgramPtr = std::unique_ptr<Program>;

#endif
