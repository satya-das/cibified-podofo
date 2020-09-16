#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfDifferenceEncoding.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfFont.h"

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-library-type-handler.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfEncodingDifference> : public ::PoDoFo::PdfEncodingDifference {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingDifference>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfEncodingDifference::PdfEncodingDifference;

  static void __zz_cib_decl __zz_cib_delete_0(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_2(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfEncodingDifference&> __zz_cib_decl __zz_cib_OperatorEqual_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncodingDifference&> rhs) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfEncodingDifference&>(
      __zz_cib_obj->::PoDoFo::PdfEncodingDifference::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncodingDifference&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddDifference_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nCode, __zz_cib_AbiType_t<::PoDoFo::pdf_uint16> unicodeValue) {
    __zz_cib_obj->::PoDoFo::PdfEncodingDifference::AddDifference(
      __zz_cib_::__zz_cib_FromAbiType<int>(nCode),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint16>(unicodeValue)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddDifference_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nCode, __zz_cib_AbiType_t<::PoDoFo::pdf_uint16> unicodeValue, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> rName, __zz_cib_AbiType_t<bool> bExplicitNames) {
    __zz_cib_obj->::PoDoFo::PdfEncodingDifference::AddDifference(
      __zz_cib_::__zz_cib_FromAbiType<int>(nCode),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint16>(unicodeValue),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(rName),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bExplicitNames)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl Contains_6(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nCode, __zz_cib_AbiType_t<::PoDoFo::PdfName&> rName, __zz_cib_AbiType_t<::PoDoFo::pdf_uint16&> rValue) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfEncodingDifference::Contains(
        __zz_cib_::__zz_cib_FromAbiType<int>(nCode),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfName&>(rName),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint16&>(rValue)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl ContainsUnicodeValue_7(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::pdf_uint16> unicodeValue, __zz_cib_AbiType_t<char&> rValue) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfEncodingDifference::ContainsUnicodeValue(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint16>(unicodeValue),
        __zz_cib_::__zz_cib_FromAbiType<char&>(rValue)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ToArray_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfArray&> rArray) {
    __zz_cib_obj->::PoDoFo::PdfEncodingDifference::ToArray(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfArray&>(rArray)
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl GetCount_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfEncodingDifference::GetCount()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class415 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingDifference>::__zz_cib_delete_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingDifference>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingDifference>::__zz_cib_copy_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingDifference>::__zz_cib_OperatorEqual_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingDifference>::AddDifference_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingDifference>::AddDifference_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingDifference>::Contains_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingDifference>::ContainsUnicodeValue_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingDifference>::ToArray_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingDifference>::GetCount_9)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 10 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<> struct __zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>;
template <>
class __zz_cib_Generic<::PoDoFo::PdfDifferenceEncoding> : public ::PoDoFo::PdfDifferenceEncoding {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfDifferenceEncoding>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfEncodingDifference& rDifference, ::PoDoFo::PdfDocument* pParent, bool bAutoDelete)
    : ::PoDoFo::PdfDifferenceEncoding::PdfDifferenceEncoding(    rDifference,
    std::move(pParent),
    std::move(bAutoDelete))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfEncodingDifference& rDifference, ::PoDoFo::PdfVecObjects* pParent, bool bAutoDelete)
    : ::PoDoFo::PdfDifferenceEncoding::PdfDifferenceEncoding(    rDifference,
    std::move(pParent),
    std::move(bAutoDelete))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfEncodingDifference& rDifference, ::PoDoFo::PdfDifferenceEncoding::EBaseEncoding eBaseEncoding, ::PoDoFo::PdfDocument* pParent, bool bAutoDelete)
    : ::PoDoFo::PdfDifferenceEncoding::PdfDifferenceEncoding(    rDifference,
    std::move(eBaseEncoding),
    std::move(pParent),
    std::move(bAutoDelete))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfEncodingDifference& rDifference, ::PoDoFo::PdfDifferenceEncoding::EBaseEncoding eBaseEncoding, ::PoDoFo::PdfVecObjects* pParent, bool bAutoDelete)
    : ::PoDoFo::PdfDifferenceEncoding::PdfDifferenceEncoding(    rDifference,
    std::move(eBaseEncoding),
    std::move(pParent),
    std::move(bAutoDelete))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, ::PoDoFo::PdfObject* pObject, bool bAutoDelete, bool bExplicitNames)
    : ::PoDoFo::PdfDifferenceEncoding::PdfDifferenceEncoding(    std::move(pObject),
    std::move(bAutoDelete),
    std::move(bExplicitNames))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfDifferenceEncoding& __zz_cib_param0)
    : ::PoDoFo::PdfDifferenceEncoding::PdfDifferenceEncoding(    __zz_cib_param0)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  ::PoDoFo::pdf_uint16 GetCharCode(int nIndex) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::pdf_uint16>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(nIndex)>);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_uint16>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetCharCode_0>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex))
      )
    );
  }
  void AddToDictionary(::PoDoFo::PdfDictionary& rDictionary) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(rDictionary)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::AddToDictionary_1>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDictionary)>(rDictionary)
    );
  }
  ::PoDoFo::PdfRefCountedBuffer ConvertToEncoding(const ::PoDoFo::PdfString& rString, const ::PoDoFo::PdfFont* pFont) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfRefCountedBuffer>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(rString)>, __zz_cib_AbiType_t<decltype(pFont)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfRefCountedBuffer>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::ConvertToEncoding_2>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(rString)>(rString),
        __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont))
      )
    );
  }
  const ::PoDoFo::PdfName& GetID() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<const ::PoDoFo::PdfName&>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetID_3>(
        __zz_cib_h_
      )
    );
  }
  ::PoDoFo::PdfString ConvertToUnicode(const ::PoDoFo::PdfString& rEncodedString, const ::PoDoFo::PdfFont* pFont) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfString>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(rEncodedString)>, __zz_cib_AbiType_t<decltype(pFont)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfString>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::ConvertToUnicode_4>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(rEncodedString)>(rEncodedString),
        __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont))
      )
    );
  }
  bool IsAutoDelete() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::IsAutoDelete_5>(
        __zz_cib_h_
      )
    );
  }
  bool IsSingleByteEncoding() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::IsSingleByteEncoding_6>(
        __zz_cib_h_
      )
    );
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfDifferenceEncoding)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  friend struct __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class416::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding> : public ::PoDoFo::PdfDifferenceEncoding {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfDifferenceEncoding>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfDifferenceEncoding::PdfDifferenceEncoding;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfDifferenceEncoding>(__zz_cib_proxy, __zz_cib_mtbl, *__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncodingDifference&> rDifference, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pParent, __zz_cib_AbiType_t<bool> bAutoDelete) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfDifferenceEncoding>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncodingDifference&>(rDifference),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pParent),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bAutoDelete));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_3(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncodingDifference&> rDifference, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent, __zz_cib_AbiType_t<bool> bAutoDelete) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfDifferenceEncoding>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncodingDifference&>(rDifference),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bAutoDelete));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_4(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncodingDifference&> rDifference, __zz_cib_AbiType_t<::PoDoFo::PdfDifferenceEncoding::EBaseEncoding> eBaseEncoding, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pParent, __zz_cib_AbiType_t<bool> bAutoDelete) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfDifferenceEncoding>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncodingDifference&>(rDifference),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDifferenceEncoding::EBaseEncoding>(eBaseEncoding),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pParent),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bAutoDelete));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_5(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncodingDifference&> rDifference, __zz_cib_AbiType_t<::PoDoFo::PdfDifferenceEncoding::EBaseEncoding> eBaseEncoding, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent, __zz_cib_AbiType_t<bool> bAutoDelete) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfDifferenceEncoding>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncodingDifference&>(rDifference),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDifferenceEncoding::EBaseEncoding>(eBaseEncoding),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bAutoDelete));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_6(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject, __zz_cib_AbiType_t<bool> bAutoDelete, __zz_cib_AbiType_t<bool> bExplicitNames) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfDifferenceEncoding>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bAutoDelete),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bExplicitNames));
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_uint16> __zz_cib_decl NameToUnicodeID_7(__zz_cib_AbiType_t<const ::PoDoFo::PdfName&> rName) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_uint16>(
      ::PoDoFo::PdfDifferenceEncoding::NameToUnicodeID(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(rName)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfName> __zz_cib_decl UnicodeIDToName_8(__zz_cib_AbiType_t<::PoDoFo::pdf_uint16> inCodePoint) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfName>(
      ::PoDoFo::PdfDifferenceEncoding::UnicodeIDToName(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint16>(inCodePoint)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddToDictionary_9(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfDictionary&> rDictionary) {
    __zz_cib_obj->::PoDoFo::PdfDifferenceEncoding::AddToDictionary(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDictionary&>(rDictionary)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl ConvertToUnicode_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rEncodedString, __zz_cib_AbiType_t<const ::PoDoFo::PdfFont*> pFont) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      __zz_cib_obj->::PoDoFo::PdfDifferenceEncoding::ConvertToUnicode(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rEncodedString),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFont*>(pFont)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRefCountedBuffer> __zz_cib_decl ConvertToEncoding_11(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rString, __zz_cib_AbiType_t<const ::PoDoFo::PdfFont*> pFont) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRefCountedBuffer>(
      __zz_cib_obj->::PoDoFo::PdfDifferenceEncoding::ConvertToEncoding(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rString),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFont*>(pFont)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsAutoDelete_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfDifferenceEncoding::IsAutoDelete()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsSingleByteEncoding_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfDifferenceEncoding::IsSingleByteEncoding()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfEncodingDifference&> __zz_cib_decl GetDifferences_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfEncodingDifference&>(
      __zz_cib_obj->::PoDoFo::PdfDifferenceEncoding::GetDifferences()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_uint16> __zz_cib_decl GetCharCode_15(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_uint16>(
      __zz_cib_obj->::PoDoFo::PdfDifferenceEncoding::GetCharCode(
        __zz_cib_::__zz_cib_FromAbiType<int>(nIndex)
      )
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> __zz_cib_decl GetID_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_obj->::PoDoFo::PdfDifferenceEncoding::GetID()
    );
  }
  static ::PoDoFo::PdfEncoding* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class350(::PoDoFo::PdfDifferenceEncoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfDifferenceEncoding* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class350(::PoDoFo::PdfEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfDifferenceEncoding*>(__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class416 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::__zz_cib_new_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::__zz_cib_new_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::__zz_cib_new_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::__zz_cib_new_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::NameToUnicodeID_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::UnicodeIDToName_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::AddToDictionary_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::ConvertToUnicode_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::ConvertToEncoding_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::IsAutoDelete_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::IsSingleByteEncoding_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::GetDifferences_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::GetCharCode_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::GetID_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::__zz_cib_cast_to___zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::__zz_cib_cast_from___zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 20 };
  return &methodTable;
}
}}}
