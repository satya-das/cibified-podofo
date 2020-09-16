#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfFunction.h"
#include <list>

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-library-type-handler.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfFunction> : public ::PoDoFo::PdfFunction {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFunction>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfFunction::PdfFunction;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2(__zz_cib_AbiType_t<::PoDoFo::EPdfFunctionType> eType, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rDomain, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfFunctionType>(eType),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rDomain),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_3(__zz_cib_AbiType_t<::PoDoFo::EPdfFunctionType> eType, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rDomain, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfFunctionType>(eType),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rDomain),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pParent));
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class418(::PoDoFo::PdfFunction* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfFunction* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfFunction*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class448 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFunction>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFunction>::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFunction>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFunction>::__zz_cib_new_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFunction>::__zz_cib_cast_to___zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFunction>::__zz_cib_cast_from___zz_cib_Class418)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfSampledFunction> : public ::PoDoFo::PdfSampledFunction {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSampledFunction>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfSampledFunction::PdfSampledFunction;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2(__zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rDomain, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rRange, __zz_cib_AbiType_t<const ::std::list<char>&> rlstSamples, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rDomain),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rRange),
    __zz_cib_::__zz_cib_FromAbiType<const ::std::list<char>&>(rlstSamples),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_3(__zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rDomain, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rRange, __zz_cib_AbiType_t<const ::std::list<char>&> rlstSamples, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rDomain),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rRange),
    __zz_cib_::__zz_cib_FromAbiType<const ::std::list<char>&>(rlstSamples),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pParent));
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class418(::PoDoFo::PdfSampledFunction* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfSampledFunction* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfSampledFunction*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfFunction* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class448(::PoDoFo::PdfSampledFunction* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfSampledFunction* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class448(::PoDoFo::PdfFunction* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfSampledFunction*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class449 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSampledFunction>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSampledFunction>::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSampledFunction>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSampledFunction>::__zz_cib_new_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSampledFunction>::__zz_cib_cast_to___zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSampledFunction>::__zz_cib_cast_from___zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSampledFunction>::__zz_cib_cast_to___zz_cib_Class448),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSampledFunction>::__zz_cib_cast_from___zz_cib_Class448)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfExponentialFunction> : public ::PoDoFo::PdfExponentialFunction {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExponentialFunction>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfExponentialFunction::PdfExponentialFunction;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2(__zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rDomain, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rC0, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rC1, __zz_cib_AbiType_t<double> dExponent, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rDomain),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rC0),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rC1),
    __zz_cib_::__zz_cib_FromAbiType<double>(dExponent),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_3(__zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rDomain, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rC0, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rC1, __zz_cib_AbiType_t<double> dExponent, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rDomain),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rC0),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rC1),
    __zz_cib_::__zz_cib_FromAbiType<double>(dExponent),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pParent));
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class418(::PoDoFo::PdfExponentialFunction* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfExponentialFunction* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfExponentialFunction*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfFunction* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class448(::PoDoFo::PdfExponentialFunction* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfExponentialFunction* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class448(::PoDoFo::PdfFunction* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfExponentialFunction*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class450 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExponentialFunction>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExponentialFunction>::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExponentialFunction>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExponentialFunction>::__zz_cib_new_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExponentialFunction>::__zz_cib_cast_to___zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExponentialFunction>::__zz_cib_cast_from___zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExponentialFunction>::__zz_cib_cast_to___zz_cib_Class448),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExponentialFunction>::__zz_cib_cast_from___zz_cib_Class448)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfStitchingFunction> : public ::PoDoFo::PdfStitchingFunction {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStitchingFunction>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfStitchingFunction::PdfStitchingFunction;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2(__zz_cib_AbiType_t<const ::std::list<::PoDoFo::PdfFunction>&> rlstFunctions, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rDomain, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rBounds, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rEncode, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::std::list<::PoDoFo::PdfFunction>&>(rlstFunctions),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rDomain),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rBounds),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rEncode),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_3(__zz_cib_AbiType_t<const ::std::list<::PoDoFo::PdfFunction>&> rlstFunctions, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rDomain, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rBounds, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rEncode, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::std::list<::PoDoFo::PdfFunction>&>(rlstFunctions),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rDomain),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rBounds),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rEncode),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pParent));
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class418(::PoDoFo::PdfStitchingFunction* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfStitchingFunction* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfStitchingFunction*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfFunction* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class448(::PoDoFo::PdfStitchingFunction* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfStitchingFunction* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class448(::PoDoFo::PdfFunction* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfStitchingFunction*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class451 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStitchingFunction>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStitchingFunction>::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStitchingFunction>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStitchingFunction>::__zz_cib_new_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStitchingFunction>::__zz_cib_cast_to___zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStitchingFunction>::__zz_cib_cast_from___zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStitchingFunction>::__zz_cib_cast_to___zz_cib_Class448),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStitchingFunction>::__zz_cib_cast_from___zz_cib_Class448)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}
