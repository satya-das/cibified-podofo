/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#define __ZZ_CIB_DECLARE_VALUE_CLASS(className)                                                                        \
  static_assert(std::is_standard_layout_v<className>);                                                                 \
  namespace __zz_cib_ {                                                                                                \
  template <>                                                                                                          \
  struct __zz_cib_IsValueType<className> : std::true_type                                                              \
  {                                                                                                                    \
  };                                                                                                                   \
  template <>                                                                                                          \
  struct __zz_cib_IsValueType<const className> : std::true_type                                                        \
  {                                                                                                                    \
  };                                                                                                                   \
  } // namespace __zz_cib_

#include "podofo/doc/PdfFontFactoryBase14Data.h"
__ZZ_CIB_DECLARE_VALUE_CLASS(::PoDoFo::PODOFO_CharData)
