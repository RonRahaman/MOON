#ifndef MOONAPP_H
#define MOONAPP_H

#include "MooseApp.h"

class MoonApp;

template<>
InputParameters validParams<MoonApp>();

class MoonApp : public MooseApp
{
public:
  MoonApp(InputParameters parameters);
  virtual ~MoonApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* MOONAPP_H */
