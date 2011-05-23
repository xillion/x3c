/*! \file UnitTestInc.h
 *  \brief Include frequently-used files for unittest project.
 *  \author Zhang Yun Gui, X3 C++ PluginFramework
 *  \date   2011.5.18
 */
#ifndef _UNITTEST_PUBLIC_INC_H
#define _UNITTEST_PUBLIC_INC_H

#ifdef _CONSOLE                 // Console application
#undef _AFXDLL
#endif

#include <UtilFunc/X3Portability.h>

#ifdef _CONSOLE                 // Console application

#ifdef _MSC_VER                 // hide warnings
#pragma warning(disable:4710)   // function not inlined
#pragma warning(disable:4786)   // identifier was truncated
#pragma warning(push, 1)
#pragma warning(disable:4511 4512)
#endif
#include <iostream>
#include <cppunit/config/SourcePrefix.h>
#include <cppunit/XmlOutputter.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#ifdef _MSC_VER                 // hide warnings
#pragma warning(pop)
#endif

#endif // _AFXDLL

#ifdef _MSC_VER                 // hide warnings
#pragma warning(disable:4097)   // typedef-name used as synonym for TestFixture class
#pragma warning (push, 3)
#endif
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>
#ifdef _MSC_VER                 // hide warnings
#pragma warning (pop)
#endif

#undef ASSERT
#undef VERIFY
#define ASSERT CPPUNIT_ASSERT
#define VERIFY CPPUNIT_ASSERT

#include <XComPtr.h>

#endif // _UNITTEST_PUBLIC_INC_H